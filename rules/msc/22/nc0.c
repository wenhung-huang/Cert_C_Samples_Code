#include <setjmp.h>

jmp_buf buf;
 
void f(void) {
  int i = setjmp(buf);
  if (i == 0) {
    g();
  } else {
    /* longjmp was invoked */
  }
}
 
void g(void) {
  /* ... */
  longjmp(buf, 1);
}