#include <iostream>
#include <cstdlib>
#include <string>
#include "../Busca.h"

using namespace std;

int main(int argc, char** argv) {

    int qtdElementos = stoi(argv[1]); //converte a entrada [nro elementos] de string para inteiro

    int tamanhoAtual, opcao, elemento, cont = 0;
    int vetor[TAMANHO];

    inicializaVetor(vetor, &tamanhoAtual);

    // insere elementos aleatorios no vetor
    cout << "\nInserindo " << qtdElementos << " elementos aleatorios no vetor. \nElementos inseridos: ";

    while (cont < qtdElementos) {
        elemento =  rand() % qtdElementos + 1; // gera elemento com valor de 1 a (10 ou 100 ou 1000)
        inserirNoVetor(vetor, elemento, &tamanhoAtual);
        cont++;
        cout << elemento << (cont != qtdElementos ? " | " : " "); // exibe os elementos inseridos (ex: 1 | 4 | 7 | 3 | 10 ...)
    } 
   cout << endl;

    do {

        cout << "\nMENU DE OPCOES:\n";
        cout << "\n1 - Buscar elemento no vetor (Busca Sequencial)\n";
        cout << "\n2 - Sair\n";

        cout << "\nDigite sua opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:

                cout << "Digite o valor do elemento a ser buscado (busca sequencial) no vetor: ";
                cin >> elemento;

                cout << "\nValor " << elemento << (buscaSequencial(vetor, elemento) >= 0 ? "" : " nao") << " encontrado!!\n";
                
                break;
            case 2:

                cout << "\nSaindo...\n";
                break;
            default:
                cout << "Opcao invalida\n";
                break;
        }

    } while (opcao != 2);

    return 0;
}