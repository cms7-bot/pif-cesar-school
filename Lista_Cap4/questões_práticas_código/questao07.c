#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    
    printf("Digite um numero real: ");
    scanf("%lf", &numero);
    
    if (numero >= 0.0) {       
        printf("A raiz quadrada de %.2lf eh: %.2lf\n", numero, sqrt(numero));
    } else {
        printf("O quadrado de %.2lf eh: %.2lf\n", numero, numero * numero);
    }
    
    return 0;
}