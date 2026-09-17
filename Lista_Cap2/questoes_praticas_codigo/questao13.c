#include <stdio.h>

int main() {
    int opcao;
    float lado, base, altura, area;

    printf("===CALCULADORA DE ÁREA===\n");
    printf("Escolha a figura geométrica:\n");
    printf("1 - Quadrado\n");
    printf("2 - Triângulo\n");
    printf("3 - Retângulo\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite o lado do quadrado: ");
            scanf("%f", &lado);
            area = lado * lado;
            printf("A área do quadrado é: %.2f\n", area);
            break;
        case 2:
            printf("Digite a base do retângulo: ");
            scanf("%f", &base);
            printf("Digite a altura do retângulo: ");
            scanf("%f", &altura);
            area = base * altura;
            printf("A área do retângulo é: %.2f\n", area);
            break;

        case 3:
            printf("Digite a base do triângulo: ");
            scanf("%f", &base);
            printf("Digite a altura do triângulo: ");
            scanf("%f", &altura);
            area = (base * altura) / 2;
            printf("A área do triângulo é: %.2f\n", area);
            break;
        
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}