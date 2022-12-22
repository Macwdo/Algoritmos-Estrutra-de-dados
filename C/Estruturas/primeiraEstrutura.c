#include <stdio.h>
#include <malloc.h>


typedef struct{
    float peso;
    int idade;

} Pessoa;


int main(){

    Pessoa pessoa1;

    pessoa1.idade = 12;
    pessoa1.peso = 47.5;

    printf("Idade: %d \nPeso: %.2f", pessoa1.idade, pessoa1.peso);

    return 0;
};
