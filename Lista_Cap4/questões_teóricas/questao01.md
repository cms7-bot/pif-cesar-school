a) O operador = é o operador de atribuição, na expressão if (x = 0), está atribuindo dizendo que x é igual a 0. Já o operador == é o de comparação, onde pergunta se x vale 0.  O resultado de uma expressão de atribuição em C é o próprio valor atribuído (neste caso, 0). Como o valor 0 é interpretado como falso, o bloco de código dentro do if não será executado.

b) O comando if avalia qualquer expressão numérica (inteira ou real) sob uma regra binária estrita:
    - Falso: Um resultado é falso se a expressão for avaliada estritamente como zero (seja 0 para inteiros, 0.0 para ponto flutuante, ou o caractere nulo \0).

    - Verdadeiro: Um resultado é verdadeiro se a expressão resultar em qualquer valor diferente de zero (positivo, negativo, inteiro ou fracionário, como 1, -10, 3.14).

c) O bloco associado ao if será executado. Seguindo o padrão ANSI C, a expressão dentro dos parênteses é avaliada primeiro. A variável x recebe o valor numérico -5. O retorno dessa operação de atribuição é o valor que acabou de ser atribuído, ou seja, -5. Como -5 é um valor numérico diferente de zero, o compilador C avalia a condição como verdadeira, disparando a execução do bloco de código subordinado a ela.