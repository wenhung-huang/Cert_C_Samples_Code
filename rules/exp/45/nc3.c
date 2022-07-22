// EXP45-C: Noncompliant Code Example
int main(){
char ch;
while (ch = '\t' || ch == ' ' || ch == '\n') {
  /* ... */
}
}