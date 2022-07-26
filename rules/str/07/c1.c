/*
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

void complain(const char *msg) {
  errno_t err;
  static const char prefix[] = "Error: ";
  static const char suffix[] = "\n";
  char buf[BUFSIZ];
 
  
   // Ensure that more than one character
   // is available for msg
   
  static_assert(sizeof(buf) > sizeof(prefix) + sizeof(suffix),
                "Buffer for complain() is too small");
  strcpy(buf, prefix);
 
  err = strcat_s(buf, sizeof(buf), msg);
  if (err != 0) {
    // Handle error 
  }
 
  err = strcat_s(buf, sizeof(buf), suffix);
  if (err != 0) {
    // Handle error 
  }
  fputs(buf, stderr);
}
*/