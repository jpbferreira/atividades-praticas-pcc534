#include <iostream>
#include "Fila.h"

void inserirNaFila(int dado, Fila *fila) {

    elemento *novo = new elemento();
    novo->dado = dado;
    novo->prox = NULL;
    
    fila->cauda->prox = novo;
    fila->cauda = novo;

}

void consultarFila(Fila *fila) {

    elemento *aux = fila->cabeca;

    while(aux != NULL) {
        std::cout << aux->dado << (aux->prox != NULL ? " <= " : "\n");
        aux = aux->prox;
    }
}