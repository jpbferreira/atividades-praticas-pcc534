# Estrutura de dado do tipo Lista

## Descrição
Essa versão de TAD Pilha implementa uma estrutura um com ponteiro para o topo da estrutura.

A aplicação apresenta um menu com as opções:
- 1 - Inserir na pilha
- 2 - Consultar topo
- 3 - Consultar toda pilha
- 4 - Sair

**Inserir na pilha**

Ao selecionar essa opção a aplicação solicitará a entrada de um dado (número inteiro) a ser inserido no topo da estrutura. Após feita a operação o menu de opções será apresentado novamente.

**Consultar topo**

Ao selecionar essa opção a aplicação exibirá o topo da estrutura (último elemento a ser inserido). Após feita a operação o menu de opções será apresentado novamente.

**Consultar toda pilha**

Ao selecionar essa opção a aplicação irá exibir os elementos da pilha (do topo à base). Tomemos como exemplo uma pilha com os elementos 1, 5 e 10, sendo o topo o dado de valor 1. Os dado serão exibidos da seguinte forma:

~~~~
1  - 5 - 10
~~~~

Após feita a operação o menu de opções será apresentado novamente.

**Sair**

Ao selecionar essa opção a execução da aplicação será terminada.

## Compilação e Execução

Antes de iniciar a compilação e execução certifique-se de sua máquina possui um compilador para a linguagem C/C++.

Para compilar e executar os códigos-fontes, abra a pasta /Pilha em um terminal e execute os comandos abaixo:

Compilação:
~~~~
g++ Main.cpp Pilha.cpp Pilha.h -o Pilha
~~~~

Execução:
~~~~
./Pilha
~~~~