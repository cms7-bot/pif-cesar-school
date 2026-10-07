#include <stdio.h>

int main() {
    int valor;
    int notas[] = {100, 50, 20, 10, 5, 2};
    int qtd_notas;

    printf("Informe o valor do saque em reais: ");
    scanf("%d", &valor);

    printf("\nDistribuicao de cedulas para o saque:\n");

    
    for (int i = 0; i < 6; i++) {
        qtd_notas = 0;
        
        
        while (valor >= notas[i]) {
            valor -= notas[i];
            qtd_notas++;
        }
        
        if (qtd_notas > 0) {
            printf("%d cedula(s) de R$ %d\n", qtd_notas, notas[i]);
        }
    }
    
    if (valor > 0) {
        printf("\nRestante que nao pode ser sacado com as notas disponiveis: R$ %d\n", valor);
    }

    return 0;
}