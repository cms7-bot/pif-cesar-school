#include <stdio.h>

int main() {
    int n;
    long long int t1 = 1, t2 = 1, proximo;

    printf("Informe o numero do termo desejado (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, insira um numero inteiro positivo.\n");
        return 1;
    }

    printf("Sequencia de Fibonacci ate o %do termo:\n", n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%lld ", t1);
            proximo = t1;
        } else if (i == 2) {
            printf("%lld ", t2);
            proximo = t2;
        } else {
            proximo = t1 + t2;
            t1 = t2;
            t2 = proximo;
            printf("%lld ", proximo);
        }
    }

    printf("\n\nO valor do %do termo e: %lld\n", n, proximo);

    return 0;
}