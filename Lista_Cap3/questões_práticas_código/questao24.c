#include <stdio.h>

int main() {
    int N, i, j;

    
    do {
        printf("Digite uma dimensao impar N (entre 3 e 19): ");
        scanf("%d", &N);
    } while (N < 3 || N > 19 || N % 2 == 0);

    
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {
            
            if (i == j || i + j == N + 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}