#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    int sucessor = num;
    int antecessor = num;

    sucessor++;
    antecessor--;

    printf("Antecessor do número é: %d\n", antecessor);
    printf("Número digitado é: %d\n", num);
    printf("Sucessor do número é: %d\n", sucessor);

    return 0;
}