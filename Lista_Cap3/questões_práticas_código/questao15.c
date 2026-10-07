#include <stdio.h>

int main() {
    int num;
    int encontrou = 0;

    printf("Informe um numero limite positivo: ");
    scanf("%d", &num);

    printf("Multiplos de 3 e 5 no intervalo [1, %d]:\n", num);
    
    for (int i = 1; i <= num; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("%d ", i);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("\nNenhum numero satisfaz a condicao neste intervalo.");
    }
    printf("\n");

    return 0;
}