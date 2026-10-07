#include <stdio.h>

int main() {
    int a, b, i, j;
    int soma_primos = 0;

    
    do {
        printf("Digite os valores positivos para A e B (garantindo A < B): ");
        scanf("%d %d", &a, &b);
    } while (a >= b || a <= 0);

    printf("Numeros primos no intervalo [%d, %d]:\n", a, b);

    for (i = a; i <= b; i++) {
        int divisores = 0;
        
        if (i > 1) {
            for (j = 1; j <= i; j++) {
                if (i % j == 0) {
                    divisores++;
                }
            }
            
            if (divisores == 2) {
                printf("%d ", i);
                soma_primos += i;
            }
        }
    }

    printf("\nSoma total dos primos encontrados: %d\n", soma_primos);

    return 0;
}