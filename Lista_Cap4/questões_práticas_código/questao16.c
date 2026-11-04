#include <stdio.h>

int main() {
    float dist, litros, consumo;
    scanf("%f %f", &dist, &litros);
    
    consumo = dist / litros;
    
    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo >= 8.0 && consumo <= 14.0) {
        printf("Economico!\n");
    } else if (consumo > 14.0) {
        printf("Super economico!\n");
    }
    
    return 0;
}