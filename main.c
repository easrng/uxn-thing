#include <varvara.h>
void puthex(unsigned int word) {
  char hex[16] = "0123456789abcdef";
  putchar(hex[word >> 12 & 0xf]);
  putchar(hex[word >> 8 & 0xf]);
  putchar(hex[word >> 4 & 0xf]);
  putchar(hex[word & 0xf]);
}
void putstr(unsigned char *str, unsigned int str_len) {
  for (unsigned int i = 0; i < str_len; i++)
    putchar(str[i]);
}
#include <setjmp.h>
void main(void) {
  jmp_buf env;
  int i;

  i = setjmp(env);
  if (i == 10)
    exit(0);

  putstr("i = ", 4);
  puthex(i);
  putchar('\n');
  longjmp(env, i + 1);
  putstr("Does this line get printed?\n", 28);
}
