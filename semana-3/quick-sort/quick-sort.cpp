#include "quick-sort.h"

void troca(int vetor[], int i, int j) {
    int aux = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = aux;
}

int particao(int vetor[], int p, int r, long *nroComparacoes) {
    int pivo = vetor[(p+r)/2], i , j;
    i = p-1;
    j = r+1;
    while (i < j) {
        do {
            j -= 1;
            *nroComparacoes += 1;
        } while (vetor[j] > pivo);
        do {
            i += 1;
            *nroComparacoes += 1;
        } while (vetor[i] < pivo);
        if (i < j) troca(vetor, i, j);
    }
    return j;
}

void quicksort(int vetor[], int p, int r, long *nroParticoes, long *nroComparacoes) {
    int q;
    if (p < r) {
        *nroParticoes += 1;
        q = particao(vetor, p, r, nroComparacoes);
        quicksort(vetor, p, q, nroParticoes, nroComparacoes);
        quicksort(vetor, q+1, r, nroParticoes, nroComparacoes);
    }
}