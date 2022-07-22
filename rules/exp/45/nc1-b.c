// EXP45-C: Noncompliant Code Example
int main(){
    int x,y;
 for (; x; foo(), x = y) { /* ... */ }
}