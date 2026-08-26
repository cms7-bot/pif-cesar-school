#include <stdio.h>
#include <stdlib.h>

int main() {
    int totalSegundos;
    int horas;
    int minutos;
    int segundos;
    
    printf("Digite um intervalo de tempo em segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;
    printf("O intervalo de tempo é: %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);
    system("pause");

    return 0;

}