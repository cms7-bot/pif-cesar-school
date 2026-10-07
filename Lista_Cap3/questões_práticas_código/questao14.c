#include <stdio.h>

int main() {
    long long int soma_total = 0;
    long long int quadrado;

    for (int i = 1; i <= 100; i++) {
        quadrado = i * i;
        printf("%d -> %lld\n", i, quadrado);
        soma_total += quadrado;
    }

    printf("\nSoma total dos quadrados: %lld\n", soma_total);

    return 0;
}