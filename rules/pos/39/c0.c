// POS39-C: Compliant Solution
/* sock is a connected TCP socket */
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdint.h>

int main(){
uint32_t num;
 int sock = socket();
if (recv(sock, (void *)&num, sizeof(uint32_t), 0) < (int)sizeof(uint32_t)) {
  /* Handle error */
}
 
num = ntohl(num);
printf("We recieved %u from the network!\n", (unsigned int)num);
}