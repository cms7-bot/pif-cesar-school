#include <stdio.h>

int main() {
    int n, i, j;
    int contador = 1;

    printf("Digite o numero de linhas (N) para o Triangulo de Floyd: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um numero inteiro positivo.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", contador);
            contador++; 
        }
        printf("\n"); 
    }

    return 0;
}