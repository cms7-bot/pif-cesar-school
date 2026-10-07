#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char palpite;
    char secreta;
    int tentativas = 0;


    srand(time(NULL));
    

    secreta = rand() % 26 + 'a';

    printf("Bem-vindo ao jogo de adivinhacao de letras!\n");
    printf("Tente descobrir a letra secreta (entre 'a' e 'z').\n\n");

    do {
        printf("Digite o seu palpite: ");
        scanf(" %c", &palpite);
        tentativas++;

        if (palpite < secreta) {
            printf("A letra secreta vem DEPOIS de '%c' no alfabeto.\n\n", palpite);
        } else if (palpite > secreta) {
            printf("A letra secreta vem ANTES de '%c' no alfabeto.\n\n", palpite);
        }

    } while (palpite != secreta);

    printf("Parabens! Voce acertou a letra '%c' em %d tentativas.\n", secreta, tentativas);

    return 0;
}