#include <stdio.h>
#include <malloc.h>


int main(){

    int* x=(int*) malloc(sizeof(int));
    *x = 20;
    
    int z = sizeof(int);
    printf("*x=%d z=%d pontX = %p\n", *x, z, x);
    return 0;



};