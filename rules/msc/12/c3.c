int main (){
    int *p;
    /* ... */
    ++p;

    int *q;
    /* ... */
    (*q)++;


    volatile int *r;
    /* ... */
    (void) *(r++);

}