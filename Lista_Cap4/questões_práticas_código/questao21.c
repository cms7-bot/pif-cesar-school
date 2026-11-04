#include <stdio.h>

int main() {
    float salario, aumento = 0.0, novo_salario;
    int cargo;
    
    scanf("%f %d", &salario, &cargo);
    
    if (cargo == 1) {
        if (salario <= 3000) aumento = salario * 0.15;
        else aumento = salario * 0.10;
    } else if (cargo == 2) {
        if (salario <= 5000) aumento = salario * 0.10;
        else aumento = salario * 0.05;
    } else if (cargo == 3) {
        aumento = salario * 0.08;
    }
    
    if (cargo >= 1 && cargo <= 3) {
        novo_salario = salario + aumento;
        printf("%.2f\n", aumento);
        printf("%.2f\n", novo_salario);
    }
    
    return 0;
}