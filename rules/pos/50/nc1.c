// POS50-C: Noncompliant Code Example (Thread-Local Storage)
#include <stdio.h>
#include <stddef.h>
#include <pthread.h>

__thread int val;
 
void *childThread(void *val) {
  int *res = (int *)val;
 
  printf("Result: %d\n", *res);
  return NULL;
}
 
void *createThread(void *childTid) {
  pthread_t *tid = (pthread_t *)childTid;
  int result;
  val = 1;
  if ((result = pthread_create(tid, NULL, childThread, &val)) != 0) {
    /* Handle error */
  }
  return NULL;
}
 
void *empty(void *arg) {
  /* Function that does nothing */
  val = 0;
  return NULL;
}
 
int main(void) {
  pthread_t parentTid, childTid, emptyTid;
  int result;
 
  /*
   * createThread() may complete before childThread(), and
   * the thread-local variable, val, belonging to createThread(),
   * may no longer be valid when childThread() runs.
   */
  if ((result = pthread_create(&parentTid, NULL, createThread, &childTid)) != 0) {
    /* Handle error */
  }
  if ((result = pthread_join(parentTid, NULL)) != 0) {
    /* Handle error */
  }
  if ((result = pthread_create(&emptyTid, NULL, empty, NULL)) != 0) {
    /* Handle error */
  }
  if ((result = pthread_join(emptyTid, NULL)) != 0) {
    /* Handle error */
  }
  if ((result = pthread_join(childTid, NULL)) != 0) {
    /* Handle error */
  }
  return 0;
}
