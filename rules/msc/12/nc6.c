#include <stdio.h>

int main(){
for (int i = 0; i < 10; ++i) {
  printf("i is %d", i);
  continue;  // this is meaningless; the loop would continue anyway
}
}