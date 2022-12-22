#include <stdio.h>

int main(){
    int x=25;
    int* y=&x; // Referência da variavel &

    printf("Valor de X antes:%d\n", x); 
    *y = 30;
    printf("Valor de X depois:%d\n",x );

    return 0;
};

