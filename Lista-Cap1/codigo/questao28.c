#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1;
    int num2;
    int num3;
    double media;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    media = (num1 + num2 + num3) / 3.0;
    printf("A média dos três números é: %.2f\n", media);

    system("pause");

    return 0;

}