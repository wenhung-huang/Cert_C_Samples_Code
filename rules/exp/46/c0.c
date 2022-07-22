// EXP46-C: Compliant Solution
int maint(){
if (!(getuid() && geteuid() == 0)) {
  /* ... */
}
}