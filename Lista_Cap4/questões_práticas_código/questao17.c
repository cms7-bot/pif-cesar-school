#include <stdio.h>

int main() {
    float total, valor_final, comissao;
    int opc;
    
    scanf("%f %d", &total, &opc);
    
    if (opc == 1) {
        valor_final = total * 0.90;
        comissao = valor_final * 0.05;
        printf("Valor a pagar: %.2f\n", valor_final);
        printf("Comissao: %.2f\n", comissao);
    } else if (opc == 2) {
        valor_final = total / 3.0;
        comissao = total * 0.05;
        printf("Valor da parcela: %.2f\n", valor_final);
        printf("Comissao: %.2f\n", comissao);
    }
    
    return 0;
}