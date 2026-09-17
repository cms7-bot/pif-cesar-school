#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4;
    float media_simples, media_ponderada;
    float soma_pesos = 1 + 1 + 2 + 2; // soma dos pesos = 6

    printf("=== CALCULO DE MEDIAS ===\n");

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite a nota 4: ");
    scanf("%f", &nota4);


    media_simples = (nota1 + nota2 + nota3 + nota4) / 4.0;

    media_ponderada = (nota1 * 1 + nota2 * 1 + nota3 * 2 + nota4 * 2) / soma_pesos;

    printf("\nMedia aritmetica simples = %.2f\n", media_simples);
    printf("Media ponderada = %.2f\n", media_ponderada);

    return 0;
}