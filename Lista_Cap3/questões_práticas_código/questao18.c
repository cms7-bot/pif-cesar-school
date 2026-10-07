#include <stdio.h>

int main() {
    int numero, digito;
    int numero_invertido = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    int temporario = numero; 

    
    while (temporario > 0) {
        digito = temporario % 10;
        
        
        numero_invertido = (numero_invertido * 10) + digito;
        
        
        temporario /= 10;
    }

    printf("Numero original: %d\n", numero);
    printf("Numero invertido: %d\n", numero_invertido);

    return 0;
}