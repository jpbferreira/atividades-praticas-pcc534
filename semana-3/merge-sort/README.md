# Merge Sort

## Descrição
Esse programa implementa a ordenação Merge Sort em um vetor que é preenchido automáticamente com números aleatórios não repetidos no início da execução.

A aplicação apresenta o resultado da ordenação como a seguir:
- Para ordenar um vetor com N elementos foram feitas:
<br> 'número de comparações' comparações
<br> 'número de partições' partições.

## Compilação e Execução

Antes de iniciar a compilação e execução certifique-se de sua máquina possui um compilador para a linguagem C/C++.

Para compilar e executar os códigos-fontes, abra a pasta /semana-3/ em um terminal e execute os comandos abaixo:

Compilação e Execução:

Para a execução é necessário alterar a variável **TAMANHO** no arquivo **utils.h** de acordo com número de elementos que se deseja que o vetor tenha (100, 1.000 ou 10.000).
~~~~
$ cd .\merge-sort\
$ g++ .\merge-sort.cpp .\merge-sort.h .\main.cpp ..\utils.cpp ..\utils.h -o merge-sort
$ ./merge-sort
~~~~