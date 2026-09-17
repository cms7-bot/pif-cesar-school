#include <stdio.h>

int main() {
    char letraMaiuscula, letraMinuscula;

    printf("Digite uma letra maiuscula: ");
    scanf("%c", &letraMaiuscula);

    /*
     * Na tabela ASCII, as letras maiúsculas (A-Z) ocupam os códigos
     * de 65 a 90, e as minúsculas (a-z) ocupam de 97 a 122.
     * A diferença entre o código de uma letra maiúscula e sua
     * correspondente minúscula é sempre constante: 32.
     * Ou seja: 'a' - 'A' = 97 - 65 = 32
     *
     * Duas formas equivalentes de fazer a conversão:
     *   1) Somar 32 diretamente ao código da letra maiúscula.
     *   2) Subtrair o código de 'A' (removendo o deslocamento da
     *      maiúscula) e depois somar o código de 'a' (aplicando o
     *      deslocamento da minúscula). Essa segunda forma é mais
     *      "didática" pois não depende de decorar o número 32.
     */

    // Verifica se realmente é uma letra maiúscula antes de converter
    if (letraMaiuscula >= 'A' && letraMaiuscula <= 'Z') {
        letraMinuscula = (letraMaiuscula - 'A') + 'a';
        // Equivalente a: letraMinuscula = letraMaiuscula + 32;

        printf("Letra maiuscula: %c\n", letraMaiuscula);
        printf("Letra minuscula correspondente: %c\n", letraMinuscula);
    } else {
        printf("O caractere digitado nao e uma letra maiuscula.\n");
    }

    return 0;
}