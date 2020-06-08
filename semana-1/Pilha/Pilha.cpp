#include <iostream>
#include "Pilha.h"

Pilha* inserirNaPilha(int dado, Pilha *pilha) {

    Pilha *novoTopo = new Pilha();
    novoTopo->dado = dado;
    novoTopo->prox = pilha;
    pilha = novoTopo;
    return pilha;
}

void consultarPilha(Pilha *pilha) {

    Pilha *aux = pilha;

    while (aux != NULL)
    {
        std::cout << aux->dado << (aux->prox != NULL ? " - " : "\n");
        aux = aux->prox;
    }
    
}