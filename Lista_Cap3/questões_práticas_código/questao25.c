#include <stdio.h>

int main() {
    int n, i;
    int divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisores++;
        }
    }

    printf("O numero %d possui %d divisores.\n", n, divisores);
    
    
    if (divisores == 2 && n > 1) {
        printf("Conclusao: O numero %d EH primo.\n", n);
    } else {
        printf("Conclusao: O numero %d NAO eh primo.\n", n);
    }

    return 0;
}