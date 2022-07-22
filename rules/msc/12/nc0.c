#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>


int func(int condition) {
    char *s = NULL;
    if (condition) {
        s = (char *)malloc(10);
        if (s == NULL) {
           /* Handle Error */
        }
        /* Process s */
        return 0;
    }
    /* Code that doesn't touch s */
    if (s) {
        /* This code is unreachable */
    }
    return 0;
}