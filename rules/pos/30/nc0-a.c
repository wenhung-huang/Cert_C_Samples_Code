// POS30-C: Noncompliant Code Example
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>

int main(void){
    char buf[1024];
    ssize_t len = readlink("/usr/bin/perl", buf, sizeof(buf));
    buf[len] = '\0';
    return 0;
}