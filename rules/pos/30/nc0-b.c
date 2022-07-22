// POS30-C: Noncompliant Code Example
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>


int main(void){
  long symlink_max;
  size_t bufsize;
  char *buf;
  ssize_t len;
  
  int errno = 0;
  symlink_max = pathconf("/usr/bin/", _PC_SYMLINK_MAX);
  if (symlink_max == -1) {
    if (errno != 0) {
      /* handle error condition */
    }
    bufsize = 10000;
  }
  else {
    bufsize = symlink_max+1;
  }
  
  buf = (char *)malloc(bufsize);
  if (buf == NULL) {
    /* handle error condition */
  }
  
  len = readlink("/usr/bin/perl", buf, bufsize);
  buf[len] = '\0';

  return 0;
}