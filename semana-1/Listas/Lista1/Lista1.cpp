#include <iostream>
#include "Lista1.h"

using namespace std;

Lista1* criaLista() {
    return new Lista1();
}

void liberaLista(Lista1* li) {
    
    Lista1 *aux = li;

    while (aux != NULL) {
        li = li->prox;
        delete(aux);
        aux = li;
    }
}

Lista1* insereNaCabeca(int dado, Lista1* li) {
    
    Lista1* novo = new Lista1();
    novo->dado = dado;
    novo->prox = li;
    li = novo;
    return li;
}

void insereNaCauda(int dado, Lista1* li) {
    
    Lista1* novo = new Lista1();
    novo->dado = dado;
    novo->prox = NULL;
    li->prox = novo;
}

void exibeLista(Lista1* li) {

    Lista1 *aux = li;

    while (aux != NULL) {
        cout << aux->dado << (aux->prox == NULL ? " " : " => ");
        aux = aux->prox;
    }
}