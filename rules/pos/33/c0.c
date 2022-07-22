// POS33-C: Compliant Solution
#include <sys/stat.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <signal.h>
int main(){
char *filename  /* something */;
 
pid_t pid = fork();
if (pid == 0) /* child */ {
  if (execve(filename, NULL, NULL) == -1) {
    /* Handle error */
  }
  _exit(1);  /* in case execve() fails */
}
}