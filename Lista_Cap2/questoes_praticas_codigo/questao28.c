#include <stdio.h>

int main() {
    float horasNormais, horasExtras;
    float salarioNormal, salarioExtra, salarioBrutoAnual;
    float excedente, imposto, salarioLiquidoAnual;

    printf("Digite o numero total de horas normais trabalhadas no ano: ");
    scanf("%f", &horasNormais);

    printf("Digite o numero total de horas extras trabalhadas no ano: ");
    scanf("%f", &horasExtras);

    salarioNormal = horasNormais * 10.0; 
    salarioExtra = horasExtras * 15.0;
    salarioBrutoAnual = salarioNormal + salarioExtra;

    excedente = (salarioBrutoAnual > 12000.00) ? salarioBrutoAnual - 12000.00 : 0;
    imposto = excedente * 0.15;
    salarioLiquidoAnual = salarioBrutoAnual - imposto;

    printf("Salario bruto anual: R$ %.2f\n", salarioBrutoAnual);
    printf("Excedente: R$ %.2f\n", excedente);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Salario liquido anual: R$ %.2f\n", salarioLiquidoAnual);

    return 0;
}