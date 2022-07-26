#define __STDC_WANT_LIB_EXT1__
#include <stdio.h>
  
void func(void) {
  FILE *fp;
  
  if (tmpfile_s(&fp)) {
    /* Handle error */
  }
}