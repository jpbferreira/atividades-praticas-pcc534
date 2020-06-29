#include <iostream>
#include "quick-sort.h"
#include "../utils.h"

using namespace std;

int main() {
    
    int vetor[TAMANHO], aux;
    long nroParticoes = 0, nroComparacoes = 0;
    inicializarVetor(vetor); // preenche o vetor com numeros aleatorios não repetidos;
    cout << "\nVetor gerado: ";
    exibirVetor(vetor);

    quicksort(vetor, 0, TAMANHO-1, &nroParticoes, &nroComparacoes);

    cout << "Vetor ordenado: ";
    exibirVetor(vetor);

    cout << "\nPara ordenar um vetor com " << TAMANHO << " elementos foram feitas:\n" << nroComparacoes << " comparacoes\n" << nroParticoes << " particoes.\n";

    return 0;

}