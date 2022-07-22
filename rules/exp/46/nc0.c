// EXP46-C: Noncompliant Code Example

int main(){
if (!(getuid() & geteuid() == 0)) {
  /* ... */
}
}
