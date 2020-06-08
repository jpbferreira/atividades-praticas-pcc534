struct Lista2{
    struct elemento *cabeca;
    struct elemento *cauda;
};

struct elemento{
    int dado;
    struct elemento *prox;
};

Lista2* criaLista();

void liberaLista(Lista2* li);

Lista2* insereNaCabeca(int dado, Lista2* li);

void insereNaCauda(int dado, Lista2* li);

void exibeLista(Lista2* li);