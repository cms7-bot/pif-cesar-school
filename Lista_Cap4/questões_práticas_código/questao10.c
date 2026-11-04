#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("PAR\n");
    } else {
        printf("IMPAR\n");
    }
    
    if (num > 0) {
        printf("POSITIVO\n");
    } else if (num < 0) {
        printf("NEGATIVO\n");
    } else {
        printf("ZERO\n");
    }
    
    return 0;
}