// EXP37-C: Noncompliant Code Example (POSIX)
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
int fd;
fd = open("toto.txt", O_CREAT | O_EXCL | O_WRONLY | O_TRUNC);
}