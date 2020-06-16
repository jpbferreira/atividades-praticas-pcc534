#include <iostream>
#include "Busca.h"

int inicializaVetor(int vetor[], int *tamanhoAtual) {

    int indice = 0;
    
    while(indice < TAMANHO) {
        vetor[indice] = -1;
        indice++;
    }

    *tamanhoAtual = 0;
}

int inserirNoVetor(int vetor[], int elemento, int *tamanhoAtual) {

    vetor[*tamanhoAtual] = elemento;
    *tamanhoAtual += 1;
}

int inserirOrdenadoNoVetor(int vetor[], int elemento, int *tamanhoAtual) {

    int indice = 0;
    bool inserido = false;

    do {
        
        if (vetor[indice] == -1) {
            vetor[indice] = elemento;
            inserido = true;
            *tamanhoAtual += 1;
        } else if (elemento <= vetor[indice]) {
            
            for (int i = *tamanhoAtual; i > indice; i--) {
                vetor[i] = vetor[i-1];
            }

            vetor[indice] = elemento;
            inserido = true;
            *tamanhoAtual += 1;
        }

        indice++;

    } while(!inserido && indice < TAMANHO);

}

int buscaSequencial(int vetor[], int elemento) {

    int indice = 0, nroComparacao = 0;

    std::cout << "\nNumero de comparacoes executadas: ";
    while (vetor[indice] != -1 && indice < TAMANHO) {

        nroComparacao += 1;
        if (vetor[indice] == elemento) {
            std::cout << nroComparacao;
            return indice;
        }

        indice++;
    }

    std::cout << nroComparacao;
    return -1;
}

int buscaBinaria(int vetor[], int element) {

    int inicio = 0, meio, fim = TAMANHO - 1, nroComparacao = 0;

    std::cout << "\nNumero de comparacoes executadas: ";
    do {

        meio = (fim + inicio)/2;
        nroComparacao += 1;

        if (vetor[meio] == element) {
            std::cout << nroComparacao;
            return meio;
        } else if (vetor[meio] > element) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    } while (inicio <= fim);

    std::cout << nroComparacao;

    return -1;
}