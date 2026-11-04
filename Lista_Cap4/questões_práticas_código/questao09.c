#include <stdio.h>

int main() {
    float lab, semestral, exame, media;
    
    printf("Digite a nota do Trabalho de Laboratorio: ");
    scanf("%f", &lab);
    printf("Digite a nota da Avaliacao Semestral: ");
    scanf("%f", &semestral);
    printf("Digite a nota do Exame Final: ");
    scanf("%f", &exame);
    
    
    media = (lab * 2.0 + semestral * 3.0 + exame * 5.0) / 10.0;
    
    printf("Media ponderada: %.1f\n", media);
    printf("Situacao: ");
    
    
    if (media >= 5.0) {
        printf("Aprovado\n");
    } else if (media >= 3.0) { 
        printf("Em Recuperacao\n");
    } else if (media >= 0.0) {
        printf("Reprovado\n");
    } else {
        printf("Nota invalida inserida.\n");
    }
    
    return 0;
}