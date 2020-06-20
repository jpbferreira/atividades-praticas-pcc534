#include <iostream>
#include "quick-sort.h"
#include "../utils.h"

using namespace std;

int main() {
    
    int vetor[TAMANHO], aux;
    inicializarVetor(vetor); // preenche o vetor com numeros aleatorios não repetidos;
    cout << "\nVetor gerado: ";
    exibirVetor(vetor);

    quicksort(vetor, 0, TAMANHO-1);

    cout << "Vetor ordenado: ";
    exibirVetor(vetor);

    return 0;

}