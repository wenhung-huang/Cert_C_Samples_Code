#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
char myFilename[1000];
const char elimNewLn[] = "\n";
 
fgets(myFilename, sizeof(myFilename)-1, stdin);
myFilename[sizeof(myFilename)-1] = '\0';
myFilename[strcspn(myFilename, elimNewLn)] = '\0';
}