#include <stdio.h>

int main() {
    float valor, valor_final;
    int estado;
    
    scanf("%f %d", &valor, &estado);
    
    switch (estado) {
        case 1:
            valor_final = valor * 1.07;
            printf("%.2f\n", valor_final);
            break;
        case 2:
            valor_final = valor * 1.12;
            printf("%.2f\n", valor_final);
            break;
        case 3:
            valor_final = valor * 1.15;
            printf("%.2f\n", valor_final);
            break;
        case 4:
            valor_final = valor * 1.08;
            printf("%.2f\n", valor_final);
            break;
        default:
            printf("Erro: Estado invalido\n");
    }
    
    return 0;
}