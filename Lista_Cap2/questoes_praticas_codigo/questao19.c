#include <stdio.h>

int main() {
    float taxa_diaria = 30.00;
    float taxa_imposto = 0.08;

    float dias_trabalhados;

    float valor_bruto, valor_imposto, valor_liquido;

    printf("Digite o número de dias trabalhados: ");
    scanf("%f", &dias_trabalhados);

    valor_bruto = dias_trabalhados * taxa_diaria;
    valor_imposto = valor_bruto * taxa_imposto;
    valor_liquido = valor_bruto - valor_imposto;

    printf("Valor bruto: R$ %.2f\n", valor_bruto);
    printf("Valor do imposto: R$ %.2f\n", valor_imposto);
    printf("Valor líquido: R$ %.2f\n", valor_liquido);

    return 0;

}