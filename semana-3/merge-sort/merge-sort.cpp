#include "../utils.h"
#include "./merge-sort.h"

void intercala(int vetor[], int inicio, int fim, int meio, long *nroComparacoes) {
    int posLivre, inicioVetor1, inicioVetor2, i;
    int aux[TAMANHO];
    inicioVetor1 = inicio;
    inicioVetor2 = meio + 1;
    posLivre = inicio;

    while (inicioVetor1 <= meio && inicioVetor2 <= fim)
    {
        *nroComparacoes += 1;
        if (vetor[inicioVetor1] <= vetor[inicioVetor2]) {
            aux[posLivre] = vetor[inicioVetor1];
            inicioVetor1 += 1;
        } else {
            aux[posLivre] = vetor[inicioVetor2];
            inicioVetor2 += 1;
        }
        posLivre += 1;
    }

    for (i = inicioVetor1; i <= meio; i++)
    {
        aux[posLivre] = vetor[i];
        posLivre += 1;
    }
    
    for (i = inicioVetor2; i <= fim; i++)
    {
        aux[posLivre] = vetor[i];
        posLivre += 1;
    }

    for (i = inicio; i <= fim; i++)
    {
        vetor[i] = aux[i];
    }
}

void mergesort(int vetor[], int inicio, int fim, long *nroParticoes, long *nroComparacoes) {
    int meio;
    if (inicio < fim) {
        meio = (inicio + fim)/2;
        *nroParticoes += 1;
        mergesort(vetor, inicio, meio, nroParticoes, nroComparacoes);
        mergesort(vetor, meio+1, fim, nroParticoes, nroComparacoes);
        intercala(vetor, inicio, fim, meio, nroComparacoes);
    }
}