#include <iostream>
#include "utils.h"

using namespace std;

void inicializarVetor(int vetor[]) {

    int i = 0, elemento;
    while(i < TAMANHO) {
        elemento = gerarNumeroAleatorioValido(vetor, i);
        if (elemento != -1) {
            vetor[i] = elemento;
            i += 1;
        }
    }
}

int gerarNumeroAleatorioValido(int vetor[], int tamanhoAtual) {

    int aux = 0;
    int elemento = rand() % TAMANHO + 1;
    while(aux < tamanhoAtual) {
        if(vetor[aux] == elemento) return -1;
        aux++;
    }
    
    return elemento;
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