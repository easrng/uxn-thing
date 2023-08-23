#include <font.h>
#include <varvara.h>
unsigned char *screen_buffer;
unsigned int screen_size;
unsigned char *input_buffer;
unsigned int input_size;
unsigned int input_len = 0;
unsigned int screen_w;
unsigned int screen_h;
unsigned int screen_rotate = 0;
int cursor_x = 0;
int cursor_y = 0;
#define GET_SCREEN_BUFFER(x, y)                                                \
  (screen_buffer[(((y) + screen_rotate) % screen_h) * screen_w + (x)])
#define SET_SCREEN_BUFFER(x, y, val)                                           \
  (screen_buffer[(((y) + screen_rotate) % screen_h) * screen_w + (x)] = (val))
void move_cursor_down(void);
void move_cursor_right(void) {
  cursor_x++;
  if (cursor_x >= screen_w) {
    move_cursor_down();
    cursor_x = 0;
  }
}
void move_cursor_up(void);
void move_cursor_left(void) {
  cursor_x--;
  if (cursor_x < 0) {
    cursor_x = screen_w - 1;
    move_cursor_up();
  }
}
void move_cursor_up(void) {
  cursor_y--;
  if (cursor_y < 0) {
    cursor_y = 0;
  }
}
void move_cursor_down(void) {
  cursor_y++;
  if (cursor_y >= screen_h) {
    screen_rotate++;
    cursor_y = screen_h - 1;
    for (unsigned int i = 0; i < screen_w; i++)
      SET_SCREEN_BUFFER(i, screen_h - 1, 0);
  }
}
void render() {
  for (unsigned int y = 0; y < screen_h; y++) {
    for (unsigned int x = 0; x < screen_w; x++) {
      unsigned char val = GET_SCREEN_BUFFER(x, y);
      set_screen_xy(x + 1 << 3, y + 1 << 3);
      set_screen_addr(font[val]);
      draw_sprite(x == cursor_x && y == cursor_y ? 0x54 : 0x51);
    }
  }
}
void putchar_g(unsigned char c) {
  if (c == '\r') {
    cursor_x = 0;
  } else if (c == '\n') {
    cursor_x = 0;
    move_cursor_down();
  } else if (c == '\b') {
    if (cursor_x)
      move_cursor_left();
  } else {
    SET_SCREEN_BUFFER(cursor_x, cursor_y, c);
    move_cursor_right();
  }
}
void on_controller(void) {
  unsigned char c = controller_key();
  if (c) {
    if (c == '\r') {
      for (unsigned int i = 0; i < input_len; i++)
        putchar(input_buffer[i]);
      putchar('\n');
      putchar_g('\n');
      input_len = 0;
    } else if (c == '\b') {
      if (input_len) {
        input_len--;
        do {
          move_cursor_left();
          SET_SCREEN_BUFFER(cursor_x, cursor_y, 0);
        } while (cursor_x && !GET_SCREEN_BUFFER(cursor_x - 1, cursor_y));
      }
    } else if (input_len < input_size) {
      input_buffer[input_len] = c;
      input_len++;
      putchar_g(c);
    }
    render();
  }
}
unsigned char render_soon = 0;
void on_console(void) {
  putchar_g(console_read());
  render_soon = 1;
}
void on_screen(void) {
  if (render_soon) {
    render_soon = 0;
    render();
  }
}
void main(void) {
  set_palette(0x3c0f, 0x2b0f, 0x7f0f);
  screen_w = (screen_width() >> 3) - 2;
  screen_h = (screen_height() >> 3) - 2;
  screen_size = screen_w * screen_h;
  screen_buffer = asm(";end");
  input_size = 512;
  input_buffer = screen_buffer + screen_size;
  render();
}
