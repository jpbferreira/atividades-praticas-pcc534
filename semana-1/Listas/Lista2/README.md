# Estrutura de dado do tipo Lista

## Descrição
Essa versão de TAD Lista (Lista2) implementa uma estrutura um com ponteiro para a cabeça e outro para a cauda da estrutura.

A aplicação apresenta um menu com as opções:
- Inserir no inicio da lista
- Inserir no final da lista
- Consultar toda a lista
- Esvaziar a lista
- Sair

**Inserir no início da lista**

Ao selecionar essa opção a aplicação solicitará a entrada de um dado (número inteiro) a ser inserido no início da estrutura. Após feita a operação o menu de opções será apresentado novamente.

**Inserir no final da lista**

Ao selecionar essa opção a aplicação solicitará a entrada de um dado (número inteiro) a ser inserido no final da estrutura. Após feita a operação o menu de opções será apresentado novamente.

**Consultar toda a lista**

Ao selecionar essa opção a aplicação irá exibir os elementos da lista (do início ao final). Tomemos como exemplo uma lista com os elementos 1, 5, 10. Os dado serão exibidos da seguinte forma:

~~~~
1  => 5 => 10
~~~~

Após feita a operação o menu de opções será apresentado novamente.

**Esvaziar lista**

Ao selecionar essa opção a aplicação irá esvaziar a lista, ou seja, deletar todos os elementos nela inseridos anteriormente.

Após feita a operação o menu de opções será apresentado novamente.

**Sair**

Ao selecionar essa opção a execução da aplicação será terminada.

## Compilação e Execução

Antes de iniciar a compilação e execução certifique-se de sua máquina possui um compilador para a linguagem C/C++.

Para compilar e executar os códigos-fontes, abra a pasta /Lista2 em um terminal e execute os comandos abaixo:

Compilação:
~~~~
g++ Main.cpp Lista2.cpp Lista2.h -o Lista
~~~~

Execução:
~~~~
./Lista
~~~~