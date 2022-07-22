#include <setjmp.h>

jmp_buf buf;
 
void f(void) {
  if (setjmp(buf) == 0) {
    g();
  } else {
    /* longjmp was invoked */
  }
}
 
void g(void) {
  /* ... */
  longjmp(buf, 1);
}