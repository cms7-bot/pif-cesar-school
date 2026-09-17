#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Decimal: %d | Hexadecimal: %x | Octal: %o | Caractere ASCII: %c\n\n", numero, numero, numero, numero);

    system("pause");

    return 0;
}