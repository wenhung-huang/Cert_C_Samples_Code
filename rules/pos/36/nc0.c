// POS36-C: Noncompliant Code Example
/* Drop superuser privileges in incorrect order */
int main(void){
  if (setuid(getuid()) == -1) {
    /* handle error condition */
  }
  if (setgid(getgid()) == -1) {
    /* handle error condition */
  }
  return 0;
}
/* It is still possible to regain group privileges due to
 * incorrect relinquishment order */
