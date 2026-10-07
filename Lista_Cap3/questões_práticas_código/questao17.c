#include <stdio.h>

int main() {
    float nota, soma = 0.0, maior = -1.0, menor = 11.0;
    int total_alunos = 0;

    while (1) {
        printf("Digite a nota do aluno (ou -1.0 para encerrar): ");
        scanf("%f", &nota);

        if (nota == -1.0) {
            break;
        }

        if (nota >= 0.0 && nota <= 10.0) {
            total_alunos++;
            soma += nota;

            if (nota > maior) maior = nota;
            if (nota < menor) menor = nota;
        } else {
            printf("Nota invalida. Insira um valor entre 0.0 e 10.0.\n");
        }
    }

    if (total_alunos > 0) {
        printf("\n--- Resultados ---\n");
        printf("a) Total de alunos avaliados: %d\n", total_alunos);
        printf("b) Maior nota: %.2f\n", maior);
        printf("c) Menor nota: %.2f\n", menor);
        printf("d) Media geral: %.2f\n", soma / total_alunos);
    } else {
        printf("\nNenhuma nota valida foi inserida.\n");
    }

    return 0;
}