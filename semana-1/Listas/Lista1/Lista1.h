struct Lista1 {
    int dado;
    Lista1 *prox;
};

Lista1* criaLista();

void liberaLista(Lista1* li);

Lista1* insereNaCabeca(int dado, Lista1* li);

void insereNaCauda(int dado, Lista1* li);

void exibeLista(Lista1* li);