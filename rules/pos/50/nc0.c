// POS50-C: Noncompliant Code Example (Automatic Storage)
#include <stdio.h>
#include <stddef.h>
#include <pthread.h>

void *childThread(void *val) {
  /*
   * Depending on the order of thread execution, the object
   * referred to by val may be out of its lifetime, resulting
   * in a potentially incorrect result being printed out.
   */
  int *res = (int *)val;
  printf("Result: %d\n", *res);
  return NULL;
}
 
void createThread(pthread_t *tid) {
  /* Store 1 in val on the stack. */
  int val = 1;
  int result;
  if ((result = pthread_create(tid, NULL, childThread, &val)) != 0) {
    /* Handle error */
  }
}
 
int main(void) {
  pthread_t tid;
  int result;
  createThread(&tid);
  if ((result = pthread_join(tid, NULL)) != 0) {
    /* Handle error */
  }
  return 0;
}
