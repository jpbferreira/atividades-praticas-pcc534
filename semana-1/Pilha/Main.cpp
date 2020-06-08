#include <iostream>
#include "Pilha.h"

using namespace std;

int main() {

    int opcao, dado;
    Pilha *pilha = NULL;

    do {

        cout << "\nMENU DE OPCOES:\n";
        cout << "\n1 - Inserir na pilha\n";
        cout << "\n2 - Consultar topo\n";
        cout << "\n3 - Consultar toda pilha\n";
        cout << "\n4 - Sair\n";

        cout << "\nDigite sua opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            
            cout << "Digite o valor do dado a ser inserido na pilha: ";
            cin >> dado;

            if (pilha == NULL) {
                pilha = new Pilha();
                pilha->dado = dado;
                pilha->prox = NULL;
            } else {
                pilha = inserirNaPilha(dado, pilha);
            }
            cout << "Dado inserido na Pilha.\n";
            break;
        case 2:
            
            if (pilha == NULL) {
                cout << "\nPilha vazia.\n";
            } else {
                cout << "Topo da pilha: " << pilha->dado << "\n";
            }
            break;
        case 3:
            
            if (pilha == NULL) {
                cout << "\nPilha vazia.\n";
            } else {
                cout << "Exibindo os dados da pilha: ";
                consultarPilha(pilha);
            }

            break;
        case 4:

            cout << "\nSaindo...\n";

            break;
        default:
            cout << "Opcao invalida\n";
            break;
        }
        
    } while (opcao != 4);
}