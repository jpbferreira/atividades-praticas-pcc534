# Estrutura de dado do tipo Fila

## Descrição
Essa versão de TAD Fila utiliza como base uma lista (Lista1) com ponteiro apenas para a cabeça da estrutura.

A aplicação apresenta um menu com as opções:
- 1 - Inserir na fila
- 2 - Consultar fila
- 3 - Sair

**Inserir na fila**

Ao selecionar essa opção a aplicação solicitará a entrada de um dado (número inteiro) a ser inserido na estrutura. Após feita a operação o menu de opções será apresentado novamente.

**Consultar fila**

Ao selecionar essa opção a aplicação irá exibir os elementos da fila (do início ao final). Tomemos como exemplo uma fila com os elementos 1, 5, 10. Os dado serão exibidos da seguinte forma:

~~~~
1  <= 5 <= 10
~~~~

Após feita a operação o menu de opções será apresentado novamente.

**Sair**

Ao selecionar essa opção a execução da aplicação será terminada.

## Compilação e Execução

Antes de iniciar a compilação e execução certifique-se de sua máquina possui um compilador para a linguagem C/C++.

Para compilar e executar os códigos-fontes, abra a pasta /Fila1 em um terminal e execute os comandos abaixo:

Compilação:
~~~~
g++ Main.cpp Fila.cpp Fila.h -o Fila
~~~~

Execução:
~~~~
./Fila
~~~~