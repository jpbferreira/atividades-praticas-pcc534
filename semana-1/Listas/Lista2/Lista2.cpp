#include <iostream>
#include "Lista2.h"

using namespace std;

Lista2* criaLista() {
    return new Lista2();
}

void liberaLista(Lista2* li) {
    
    elemento *aux = li->cabeca;

    while (aux != NULL) {
        li->cabeca = li->cabeca->prox;
        delete(aux);
        aux = li->cabeca;
    }
}

Lista2* insereNaCabeca(int dado, Lista2* li) {
    
    elemento *novo = new elemento();
    novo->dado = dado;
    novo->prox = li->cabeca;
    li->cabeca = novo;
    return li;
}

void insereNaCauda(int dado, Lista2* li) {
    
    elemento *novo = new elemento();
    novo->dado = dado;
    novo->prox = NULL;
    li->cauda->prox = novo;
    li->cauda = novo;
}

void exibeLista(Lista2* li) {

    elemento *aux = li->cabeca;

    while (aux != NULL) {
        cout << aux->dado << (aux->prox == NULL ? " " : " => ");
        aux = aux->prox;
    }
}