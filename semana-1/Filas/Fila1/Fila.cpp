#include <iostream>
#include "Fila.h"

void inserirNaFila(int dado, Fila *fila) {

    Fila *novo = new Fila();
    novo->dado = dado;
    novo->prox = NULL;
    fila->prox = novo;
    fila = novo;
}

void consultarFila(Fila *fila) {

    Fila *aux = fila;

    while(aux != NULL) {
        std::cout << aux->dado << (aux->prox != NULL ? " <= " : "\n");
        aux = aux->prox;
    }
}