#include <stdio.h>

int main() {
    float tempC;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &tempC);

    float tempF = (tempC * 9 / 5) + 32;
    float tempK = tempC + 273.15;

    printf("Temperatura em Fahrenheit: %.2f\n", tempF);
    printf("Temperatura em Kelvin: %.2f\n", tempK);
    



    

    

    return 0;
}