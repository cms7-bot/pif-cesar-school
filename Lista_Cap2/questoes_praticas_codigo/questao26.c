#include <stdio.h>

int main() {
    float comprimento, largura, precoUnitario;
    float perimetro, totalArame, custoTotal;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);

    printf("Digite o preço unitário do arame (em reais por metro): ");
    scanf("%f", &precoUnitario);

    perimetro = 2 * (comprimento + largura);
    totalArame = perimetro * 3; 
    custoTotal = totalArame * precoUnitario;

    printf("Perímetro do terreno: %.2f metros\n", perimetro);
    printf("Quantidade total de arame necessária: %.2f metros\n", totalArame);
    printf("Custo total do arame: R$ %.2f\n", custoTotal);
    
    return 0;
}