#include <iostream>
#include "utils.h"

using namespace std;

void inicializarVetor(int vetor[]) {

    for (int i = 0; i < TAMANHO; i++) {
        vetor[i] = gerarNumeroAleatorioValido(vetor, i);
    }
}

int gerarNumeroAleatorioValido(int vetor[], int tamanhoAtual) {

    bool repetido = false;
    int aux = 0;
    int elemento = rand() % TAMANHO + 1;
    while(!repetido && aux < tamanhoAtual) {
        if(vetor[aux] == elemento) repetido = true;
        aux++;
    }

    if (repetido) {
        gerarNumeroAleatorioValido(vetor, tamanhoAtual);
    } else {
        return elemento;
    }
}

void exibirVetor(int vetor[]) {

    int i = 0, cont = 5, meio = TAMANHO/2;
    while(i < cont){
        cout << vetor[i] << " ";
        i++;
    }
    cout << "... ";
    i = meio;
    cont += meio;
    while(i < cont){
        cout << vetor[i] << " ";
        i++;
    }
    cout << "... ";
    i = TAMANHO - 5;
    cont = TAMANHO;
    while(i < cont){
        cout << vetor[i] << " ";
        i++;
    }
    cout<<endl;
}