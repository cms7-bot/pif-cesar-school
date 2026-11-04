#include <stdio.h>

int main() {
    int opcao;
    float temp, convertido;
    
    scanf("%d", &opcao);
    scanf("%f", &temp);
    
    switch(opcao) {
        case 1:
            convertido = temp * 1.8 + 32;
            printf("%.2f\n", convertido);
            break;
        case 2:
            convertido = temp + 273.15;
            printf("%.2f\n", convertido);
            break;
        case 3:
            convertido = (temp - 32) / 1.8;
            printf("%.2f\n", convertido);
            break;
        case 4:
            convertido = temp - 273.15;
            printf("%.2f\n", convertido);
            break;
        default:
            printf("Opcao Invalida\n");
    }
    
    return 0;
}