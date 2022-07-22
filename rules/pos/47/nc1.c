// POS47-C: Noncompliant Code Example
#include <pthread.h>

void release_global_lock(void* dummy) {
  int result;
  pthread_mutex_t global_lock;
  if ((result = pthread_mutex_unlock(&global_lock)) != 0) {
    /* handle error */
  }
}
 
void* worker_thread(void* dummy) {
  int i;
  int c;
  int result;
  int b;
  int a;
  pthread_mutex_t global_lock;
 
  if ((result = pthread_setcanceltype(PTHREAD_CANCEL_ASYNCHRONOUS,&i)) != 0) {
    /* handle error */
  }
 
  while (1) {
    if ((result = pthread_mutex_lock(&global_lock)) != 0) {
      /* handle error */
    }
    pthread_cleanup_push( release_global_lock, NULL);
    c = b;
    b = a;
    a = c;
    pthread_cleanup_pop(1);
  }
  return NULL;
}
