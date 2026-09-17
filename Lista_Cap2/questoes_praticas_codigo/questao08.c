#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int quadrado = num * num;
    float decima_parte = num / 10.0;

    printf("O quadrado do número é: %d\n", quadrado);
    printf("A décima parte do número é: %.2f\n", decima_parte);

    

    return 0;
}