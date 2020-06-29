#include <iostream>
#include "./merge-sort.h"
#include "../utils.h"

using namespace std;

int main() {
    
    int *vetor = new int [TAMANHO];
    long nroParticoes = 0, nroComparacoes = 0;
    inicializarVetor(vetor); // preenche o vetor com numeros aleatorios não repetidos;
    cout << "\nVetor gerado: ";
    exibirVetor(vetor);

    mergesort(vetor, 0, TAMANHO-1, &nroParticoes, &nroComparacoes);

    cout << "Vetor ordenado: ";
    exibirVetor(vetor);

    cout << "\nPara ordenar um vetor com " << TAMANHO << " elementos foram feitas:\n" << nroComparacoes << " comparacoes\n" << nroParticoes << " particoes.\n";

    return 0;

}