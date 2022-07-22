int main(){

    int a = 2;
    int b = 2;
    int c = 2;

    if ( (a < b) && (b < c) ); /* Clearer and probably what was intended */
    /* ... */
    if ( (a == b) && (a == c) ); /* Ditto */
}