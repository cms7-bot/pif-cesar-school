#include <stdio.h>

int main() {
    int L, i, j;


    do {
        printf("Digite a dimensao do lado L (entre 3 e 20): ");
        scanf("%d", &L);
    } while (L < 3 || L > 20);

    
    for (i = 1; i <= L; i++) {
        for (j = 1; j <= L; j++) {
            
            if (i == 1 || i == L || j == 1 || j == L) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}