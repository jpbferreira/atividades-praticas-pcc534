struct Pilha {
    int dado;
    Pilha *prox;
};

Pilha* inserirNaPilha(int dado, Pilha *pilha);

void consultarPilha(Pilha *pilha);