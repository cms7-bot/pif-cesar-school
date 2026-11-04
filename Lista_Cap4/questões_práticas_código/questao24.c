#include <stdio.h>

int main() {
    int a1, a2, a3;
    
    scanf("%d %d %d", &a1, &a2, &a3);
    
    if (a1 + a2 + a3 == 180) {
        if (a1 == 90 || a2 == 90 || a3 == 90) {
            printf("Retangulo\n");
        } else if (a1 > 90 || a2 > 90 || a3 > 90) {
            printf("Obtusangulo\n");
        } else {
            printf("Acutangulo\n");
        }
    } else {
        printf("Triangulo Invalido\n");
    }
    
    return 0;
}