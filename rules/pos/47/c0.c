// POS47-C: Compliant Solution
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdint.h>
#include <pthread.h>

void* worker_thread(void* dummy) {
  int c;
  int result;
  pthread_mutex_t global_lock;
  
  while (1) {
    if ((result = pthread_mutex_lock(&global_lock)) != 0) {
      /* handle error */
    }
    int b,a;
    c = b;
    b = a;
    a = c;
    if ((result = pthread_mutex_unlock(&global_lock)) != 0) {
      /* handle error */
    }
 
    /* now we're safe to cancel, creating cancel point */
    pthread_testcancel();
  }
  return NULL;
}
