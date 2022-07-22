#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

int s_loop(char *s) {
    size_t i;
    size_t len = strlen(s);
    for (i=0; i < len; i++) {
        /* Code that doesn't change s, i, or len */
      if (s[i] == '\0') {
        /* This code is never reached */
      }
    }
    return 0;
}

