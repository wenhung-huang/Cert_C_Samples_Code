
int main(){
// */          /* Comment, not syntax error */
int g,h,n,p,b,d,f,m,a; 

f = g/**//h;   /* Equivalent to f = g / h; */
 
//\
i();           /* Part of a two-line comment */
 
/\
/ j();         /* Part of a two-line comment */
 
 
/*//*/ l();    /* Equivalent to l(); */
 
m = n//**/o
+ p;           /* Equivalent to m = n + p; */
 
a = b //*divisor:*/c
+d;            /*
                * Interpreted as a = b/c + d; in c90
                * compiler and a = b + d; in c99 compiler.
                */
}