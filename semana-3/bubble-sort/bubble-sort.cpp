#include <iostream>
#include "../utils.h"

using namespace std;

int main() {
    
    int vetor[TAMANHO], aux;
    long nrComparacoes = 0;
    inicializarVetor(vetor); // preenche o vetor com numeros aleatorios não repetidos;
    cout << "\nVetor gerado: ";
    exibirVetor(vetor);

    for(int j = 1; j <= TAMANHO; j++) {
        for(int i = 0; i <= TAMANHO - 1; i++) {

            nrComparacoes += 1;
            if (vetor[i] > vetor[i+1]) {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
    }

    cout << "Vetor ordenado: ";
    exibirVetor(vetor);
    cout << "\nForam feitas " << nrComparacoes << " comparacoes para ordenar um vetor com " << TAMANHO << " elementos.\n";

    return 0;

}