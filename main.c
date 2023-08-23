#include <font.h>
#include <varvara.h>
void str_copy(char *src, char *dest, int dest_size) {
  int i;
  for (i = 0; i < (dest_size - 1); i++) {
    if (src[i] == 0)
      break;
    dest[i] = src[i];
  }
  dest[i] = 0;
}
char *screen_buffer;
int screen_size;
char *input_buffer;
int input_size;
int input_len = 0;
int screen_w;
int screen_h;
int screen_rotate = 0;
int cursor_x = 0;
int cursor_y = 0;
#define GET_SCREEN_BUFFER(x, y)                                                \
  (screen_buffer[(((y) + screen_rotate) % screen_h) * screen_w + (x)])
#define SET_SCREEN_BUFFER(x, y, val)                                           \
  (screen_buffer[(((y) + screen_rotate) % screen_h) * screen_w + (x)] = (val))
void move_cursor_right() {
  cursor_x++;
  if (cursor_x >= screen_w) {
    move_cursor_down();
    cursor_x = 0;
  }
}
void move_cursor_left() {
  cursor_x--;
  if (cursor_x < 0) {
    cursor_x = screen_w - 1;
    move_cursor_up();
  }
}
void move_cursor_up() {
  cursor_y--;
  if (cursor_y < 0) {
    cursor_y = 0;
  }
}
void move_cursor_down() {
  cursor_y++;
  if (cursor_y >= screen_h) {
    screen_rotate++;
    cursor_y = screen_h - 1;
    for (int i = 0; i < screen_w; i++)
      SET_SCREEN_BUFFER(i, screen_h - 1, 0);
  }
}
void render() {
  for (int y = 0; y < screen_h; y++) {
    for (int x = 0; x < screen_w; x++) {
      char val = GET_SCREEN_BUFFER(x, y);
      set_screen_xy(x << 3, y << 3);
      set_screen_addr(font[val]);
      draw_sprite(x == cursor_x && y == cursor_y ? 0x54 : 0x51);
    }
  }
}
void putchar_g(char c) {
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
char key_to_char(char c) {
  if (c == '\r')
    c = '\n';
  return c;
}
void on_controller(void) {
  char c = key_to_char(controller_key());
  if (c) {
    if (c == '\n') {
      for (int i = 0; i < input_len; i++)
        putchar(input_buffer[i]);
      putchar('\n');
      input_len = 0;
      putchar_g(c);
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
char render_soon = 0;
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
  set_palette(0x0f0f, 0x0ff0, 0x0fff);
  screen_w = screen_width() >> 3;
  screen_h = screen_height() >> 3;
  screen_size = screen_w * screen_h;
  screen_buffer = asm(";end");
  input_size = 512;
  input_buffer = screen_buffer + screen_size;
  render();
}
