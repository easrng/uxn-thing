typedef unsigned char jmp_buf[4];
// TODO: save and restore wst and rst?
int setjmp(jmp_buf env) {
  // env[0] = dei(0x04);
  // env[1] = dei(0x05);
  ((unsigned int *)env)[1] = asm("SWP2r STH2kr SWP2r");
  return 0;
}
int longjmp(jmp_buf env, int value) {
  // putstr("rst: ", 5);
  // puthex(env[0]);
  // putstr(" wst: ", 6);
  // puthex(env[1]);
  // putstr(" addr: ", 7);
  // puthex(((unsigned int *) env)[1]);
  // putchar('\n');
  asm(((unsigned int *)env)[1], "SWP2r POP2r STH2 SWP2r #0000");
  return value;
}
