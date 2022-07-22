// POS38-C: Noncompliant Code Example
#include <unistd.h>
#include <sys/types.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>


int main(void){
char c;
pid_t pid;
 
int fd = open("toto.txt", O_RDWR);
if (fd == -1) {
  /* Handle error */
}
read(fd, &c, 1);
printf("root process:%c\n",c);
 
pid = fork();
if (pid == -1) {
  /* Handle error */
}
 
if (pid == 0) { /*child*/
  read(fd, &c, 1);
  printf("child:%c\n",c);
}
else { /*parent*/
  read(fd, &c, 1);
  printf("parent:%c\n",c);
}
return 0;
}