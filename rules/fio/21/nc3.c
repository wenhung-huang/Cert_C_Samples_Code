#define __STDC_WANT_LIB_EXT1__
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
  
void func(void) {
  char file_name[10];
  int fd;
 
  if (tmpnam_s(file_name, 10) != 0) {
    /* Handle error */
  }
 
  /* A TOCTOU race condition exists here */
  
  fd = open(file_name, O_WRONLY | O_CREAT | O_EXCL | O_TRUNC,
            0600);
  if (fd < 0) {
    /* Handle error */
  }
}