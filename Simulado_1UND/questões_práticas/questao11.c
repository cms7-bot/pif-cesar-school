#include <stdio.h>

int main() {
    int dias;
    double bruto, gratificacao, imposto, liquido;
    
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);
    
    bruto = dias * 45.00;
    gratificacao = bruto * 0.05;
    imposto = bruto * 0.08;
    liquido = bruto + gratificacao - imposto;
    
    printf("\n--- HOLERITE DETALHADO ---\n");
    printf("Salario Bruto: R$ %.2lf\n", bruto);
    printf("Gratificacao (5%%): R$ %.2lf\n", gratificacao);
    printf("Imposto de Renda (8%%): R$ %.2lf\n", imposto);
    printf("Salario Liquido: R$ %.2lf\n", liquido);
    
    return 0;
}