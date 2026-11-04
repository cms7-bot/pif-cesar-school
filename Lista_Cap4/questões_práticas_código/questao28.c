#include <stdio.h>

int main() {
    int opcao;
    
    scanf("%d", &opcao);
    
    switch(opcao) {
        case 1:
            printf("Direcionando para Consulta de Saldo...\n");
            break;
        case 2:
            printf("Direcionando para Emissao de Extrato...\n");
            break;
        case 3:
            printf("Direcionando para Transferencia...\n");
            break;
        case 4:
            printf("Direcionando para Atendente...\n");
            break;
        default:
            printf("Opcao Invalida!\n");
    }
    
    return 0;
}