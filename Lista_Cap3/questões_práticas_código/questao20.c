#include <stdio.h>

int main() {
    printf(" %-8s | %-12s | %-10s\n", "Decimal", "Hexadecimal", "Caractere");
    printf("----------------------------------------\n");

    for (int i = 32; i <= 126; i++) {
    
        printf(" %-8d | %-12X | %-10c\n", i, i, i);
    }

    return 0;
}