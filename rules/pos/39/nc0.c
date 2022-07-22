// POS39-C: Noncompliant Code Example
/* sock is a connected TCP socket */
#include <stdint.h>
#include <stdio.h>

int main(void){
  uint32_t num;
  int sock = socket();
  if (recv(sock, (void *)&num, sizeof(uint32_t), 0) < (int)sizeof(uint32_t)) {
    /* Handle error */
  }
  
  printf("We received %u from the network!\n", (unsigned int)num);

  return 0;
}