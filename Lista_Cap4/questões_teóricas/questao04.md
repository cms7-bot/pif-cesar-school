a) Prata
Ouro

Como o programa inicia a variável com int codigo = 2;, a estrutura de seleção salta diretamente para o case 2: e imprime "Prata". Por não haver um comando break após essa impressão, a execução do código não é interrompida e "vaza" executando os comandos das linhas subsequentes, entrando no case 3: e imprimindo "Ouro". A execução dentro do bloco apenas cessa porque o interpretador encontra um break; ao final do case 3:

b) O papel da instrução break dentro do bloco switch-case é encerrar imediatamente a execução, forçando o fluxo do programa a sair da estrutura de decisão. O fenômeno que ocorre quando o break é omitido — e as instruções dos "cases" seguintes continuam sendo executadas sequencialmente em cascata — é chamado de Fall-Through.

c) O argumento da instrução switch (expressão) aceita unicamente tipos de dados cujas variáveis ou expressões resultem em valores inteiros (como int, char, short, long ou enumerações). Não é permitido usar float ou double. Justifica-se essa regra porque a estrutura switch opera exclusivamente através de testes de valores discretos de igualdade exata. Como tipos de ponto flutuante podem sofrer aproximações, imprecisões de representação binária e arredondamentos, comparações de igualdade estrita com eles são inviáveis e não confiáveis, sendo rejeitadas pela arquitetura da Linguagem C para este propósito.

