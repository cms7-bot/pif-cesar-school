#include <stdio.h>

int main() {
    int opcao;
    float salario, novo_salario, imposto;

    do {
        printf("\n--- Menu do Sistema de Folha de Pagamento ---\n");
        printf("1. Reajuste Salarial\n");
        printf("2. Retencao de Imposto de Renda\n");
        printf("3. Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Informe o salario base: R$ ");
                scanf("%f", &salario);
                
                if (salario <= 2000.00) {
                    novo_salario = salario * 1.15;
                } else {
                    novo_salario = salario * 1.10;
                }
                printf("Novo salario reajustado: R$ %.2f\n", novo_salario);
                break;
                
            case 2:
                printf("Informe o salario base: R$ ");
                scanf("%f", &salario);
                
                if (salario <= 3000.00) {
                    imposto = salario * 0.08;
                } else {
                    imposto = salario * 0.15;
                }
                printf("Valor da retencao (desconto): R$ %.2f\n", imposto);
                break;
                
            case 3:
                printf("Encerrando o sistema...\n");
                break;
                
            default:
                
                printf("Opcao invalida. Por favor, escolha 1, 2 ou 3.\n");
        }
        
    } while (opcao != 3);

    return 0;
}