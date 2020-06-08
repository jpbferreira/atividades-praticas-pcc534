#include <iostream>
#include "Lista1.h"

using namespace std;

int main() {

    int opcao, dado;
    Lista1 *lista = NULL;

    do {

        cout << "\nMENU DE OPCOES:\n";
        cout << "\n1 - Inserir no inicio da lista\n";
        cout << "\n2 - Inserir no final da lista\n";
        cout << "\n3 - Consultar toda a lista\n";
        cout << "\n4 - Esvaziar a lista\n";
        cout << "\n5 - Sair\n";

        cout << "\nDigite sua opcao: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            
            cout << "Digite o valor do dado a ser inserido no inicio da lista: ";
            cin >> dado;

            if (lista == NULL) {
                lista = criaLista();
                lista->dado = dado;
                lista->prox = NULL;
            } else {
                lista = insereNaCabeca(dado, lista);
            }
            cout << "Dado inserido no inicio da lista.\n";

            break;
        case 2:
            
            cout << "Digite o valor do dado a ser inserido no final da lista: ";
            cin >> dado;

            if (lista == NULL) {
                lista = criaLista();
                lista->dado = dado;
                lista->prox = NULL;
            } else {

                Lista1 *aux = lista;

                while (aux->prox != NULL) {
                    aux = aux->prox;
                }

                insereNaCauda(dado, aux);
            }
            cout << "Dado inserido no final da lista.\n";

            break;
        case 3:

            if (lista == NULL) {
                cout << "\nLista vazia.\n";
            } else {
                cout << "Exibindo dados da lista: ";
                exibeLista(lista);
            }
            break;
        case 4:

            cout << "\nEsvaziando a lista.";
            liberaLista(lista);
            lista = NULL;
            cout << "\nLista vazia.\n";
            break;
        case 5:

            cout << "Saindo...!!";
            break;

        default:
            cout << "Opcao invalida\n";
            break;
        }
        
    } while (opcao != 5);
}