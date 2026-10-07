#include <stdio.h>

int main() {
    float valor;
    float soma = 0.0;
    int quantidade = 0;

    printf("Digite uma sequencia de valores reais positivos.\n");
    printf("Para encerrar, digite um valor negativo.\n\n");

    while (1) {
        printf("Informe um valor: ");
        scanf("%f", &valor);

        /* Condição de parada (sentinela) */
        if (valor < 0) {
            break;
        }

        soma += valor;
        quantidade++;
    }

    printf("\n--- Resultados ---\n");
    
    if (quantidade > 0) {
        float media = soma / quantidade;
        printf("Quantidade de valores validos: %d\n", quantidade);
        printf("Soma total: %.2f\n", soma);
        printf("Media aritmetica: %.2f\n", media);
    } else {
        printf("Nenhum valor valido foi digitado.\n");
    }

    return 0;
}