#include <stdio.h>

int main() {
    float velocidadeKmH, velocidadeMS;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidadeKmH);

    velocidadeMS = velocidadeKmH / 3.6;

    printf("Velocidade em m/s: %.2f\n", velocidadeMS);

    
    return 0;
}