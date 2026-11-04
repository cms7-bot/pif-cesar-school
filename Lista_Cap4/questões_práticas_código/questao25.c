#include <stdio.h>

int main() {
    int valor_pagar, valor_entregue, troco;
    
    scanf("%d %d", &valor_pagar, &valor_entregue);
    
    if (valor_entregue < valor_pagar) {
        printf("Erro: Valor insuficiente\n");
    } else {
        troco = valor_entregue - valor_pagar;
        printf("Troco devido: R$ %d\n", troco);
        
        if (troco / 100 > 0) {
            printf("%d cedula(s) de R$ 100\n", troco / 100);
            troco %= 100;
        }
        if (troco / 50 > 0) {
            printf("%d cedula(s) de R$ 50\n", troco / 50);
            troco %= 50;
        }
        if (troco / 20 > 0) {
            printf("%d cedula(s) de R$ 20\n", troco / 20);
            troco %= 20;
        }
        if (troco / 10 > 0) {
            printf("%d cedula(s) de R$ 10\n", troco / 10);
            troco %= 10;
        }
        if (troco / 5 > 0) {
            printf("%d cedula(s) de R$ 5\n", troco / 5);
            troco %= 5;
        }
        if (troco / 2 > 0) {
            printf("%d cedula(s) de R$ 2\n", troco / 2);
            troco %= 2;
        }
        if (troco > 0) {
            printf("%d moeda(s) de R$ 1\n", troco);
        }
    }
    
    return 0;
}