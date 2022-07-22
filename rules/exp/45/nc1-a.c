// EXP45-C: Noncompliant Code Example
int main(){
 int x,y;
 do { /* ... */ } while (foo(), x = y);
}