#include <stdio.h>
#include <stdbool.h>
#define MAX 50

typedef int CHAVE;

typedef struct{
    CHAVE chave;
    // outros
} REGISTRO;

typedef struct{
    REGISTRO A[MAX];
    int nElem;

} LISTA;

void inicializarListaCopia(LISTA l){
    l.nElem = 0; //Copia da LISTA
};

void inicializarLista(LISTA* l){
    l->nElem = 0; //Acessa diretamente e muda a LISTA no endereço de memoria
};

int tamanho(LISTA* l){
    return l->nElem;
};

int buscaSequencial(LISTA *l , CHAVE ch){
    int i=0;
    while(i < l->nElem){
        if (ch == l->A[i].chave)
            return i;
        else i++;
        };
    return -1;
    };

bool inserirElemLista(LISTA *l, REGISTRO reg, int i){
    if ((l->nElem == MAX) || (i < 0) || i > l->nElem)
        return false;
    
    for (int j = l->nElem; j > i; j--) l->A[j] = l->A[j-1];
        l->A[i] = reg;
        l->nElem++;
    return true;

};

bool excluirElemLista(CHAVE ch, LISTA* l){
    
    int pos = buscaSequencial(l, ch);
    if (pos == -1) return false;
    for (int j=pos; j < l->nElem-1; j++)
        l->A[j] = l->A[j+1];

}

void exibirLista(LISTA* l){
    printf("Lista:\"");

    for (int i=0;i<l->nElem; i++)
        printf(" %d", l->A[i].chave);
    printf("\"\n");
};

void renicializarLista(LISTA *l){
    l->nElem = 0; 
};

int main(){

    LISTA Lista;
    REGISTRO num0, num1, num2, num3;
    num0.chave =4;
    num1.chave =9;
    num2.chave =3;
    num3.chave =52;
    
    inicializarLista(&Lista);
    inserirElemLista(&Lista, num0, 0);
    inserirElemLista(&Lista, num1, 0);
    inserirElemLista(&Lista, num2, 0);
    inserirElemLista(&Lista, num3, 0);
    exibirLista(&Lista);
    int busca = buscaSequencial(&Lista, num0.chave);
    if(busca == -1)
        printf("Não encontrado %d", busca);
    else
        printf("Encontrado na posição %d", busca);
    };


