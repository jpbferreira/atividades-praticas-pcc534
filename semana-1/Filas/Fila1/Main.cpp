#include <iostream>
#include "Fila.h"

using namespace std;

int main() {

    int opcao, dado;
    Fila *fila = NULL;

    do {

        cout << "\nMENU DE OPCOES:\n";
        cout << "\n1 - Inserir na fila\n";
        cout << "\n2 - Consultar fila\n";
        cout << "\n3 - Sair\n";

        cout << "\nDigite sua opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            
            cout << "Digite o valor do dado a ser inserido na fila: ";
            cin >> dado;

            if (fila == NULL) {
                fila = new Fila();
                fila->dado = dado;
                fila->prox = NULL;
            } else {

                Fila *ultimo = fila;

                while(ultimo->prox != NULL) {
                    ultimo = ultimo->prox;
                }

                inserirNaFila(dado, ultimo);
            }
            cout << "Dado inserido na Fila.\n";
            break;
        case 2:
            
            if (fila == NULL) {
                cout << "\nFila vazia.\n";
            } else {
                cout << "Exibindo os dados da fila: ";
                consultarFila(fila);
            }
            break;
        case 3:

            cout << "\nSaindo...\n";
            break;
        default:
            cout << "Opcao invalida\n";
            break;
        }
        
    } while (opcao != 3);
}