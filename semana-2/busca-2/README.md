# Busca Binária

## Descrição
Esse programa implementa a chamada de busca binária em um vetor que é preenchido automáticamente (ordenadamente) com números aleatórios no início da execução.

A aplicação apresenta um menu com as opções:
- 1 - Buscar elemento no vetor (Busca Binária)
- 2 - Sair

**Buscar elemento no vetor (Busca Binária)**

Ao selecionar essa opção a aplicação solicitará a entrada de um dado (número inteiro) a ser buscado no vetor.\n
Abaixo encontra-se a saída tanto paro caso de sucesso (dado está no vetor) quanto para falha (dado não está no vetor). Também é exibido
o número de comparações realizados pela busca.
~~~~
Numero de comparacoes executadas: <nroComparacoes>
Valor <dado> encontrado!! / Valor <dado> não encontrado!!
~~~~

Após feita a operação o menu de opções será apresentado novamente.

**Sair**

Ao selecionar essa opção a execução da aplicação será terminada.

## Compilação e Execução

Antes de iniciar a compilação e execução certifique-se de sua máquina possui um compilador para a linguagem C/C++.

Para compilar e executar os códigos-fontes, abra a pasta /semana-2/ em um terminal e execute os comandos abaixo:

Compilação:
~~~~
g++ .\busca-2\Main.cpp .\Busca.cpp .\Busca.h -o Busca
~~~~

Execução: 

Para a execução é necessário passar o tamanho do vetor como argumento (10, 100 ou 1000) e também alterar a variável **TAMANHO** no arquivo **Busca.h** de acordo com o valor do argumento que será passado para a aplicação.
~~~~
./Busca [tamanho]
~~~~