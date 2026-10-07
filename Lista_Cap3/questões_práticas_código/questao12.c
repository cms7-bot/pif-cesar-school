#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;

    printf("%-10s | %-12s | %-10s\n", "Celsius", "Fahrenheit", "Kelvin");
    printf("---------------------------------------\n");

    for (celsius = 0; celsius <= 100; celsius += 5) {
        fahrenheit = (9.0 * celsius) / 5.0 + 32.0;
        kelvin = celsius + 273.15;
    
        printf("%-10.2f | %-12.2f | %-10.2f\n", celsius, fahrenheit, kelvin);
    }

    return 0;
}