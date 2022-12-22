#include <stdio.h>
#include <malloc.h>

#define pesoMaximo 90

typedef struct{
    float peso;
    int idade;
}Pessoa;

int main(){

    Pessoa* pessoa1= (Pessoa*) malloc(sizeof(Pessoa));

    pessoa1->idade = 30;
    pessoa1->peso = 91;

    printf("Idade %d - Peso %.2f\n", pessoa1->idade, pessoa1->peso);
    
    if (pesoMaximo < pessoa1->peso){
        printf("Você está acima do peso limite");
    }
    else{
        printf("Você está dentre o limite de peso");
    };

    
    
};