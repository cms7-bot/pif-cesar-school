#include <stdio.h>

int main() {
    int N, i, j;
    int contador = 1;
    
    printf("Digite o numero de linhas do Triangulo de Floyd: ");
    scanf("%d", &N);
    
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", contador);
            contador++;
        }
        printf("\n");
    }
    
    return 0;
}