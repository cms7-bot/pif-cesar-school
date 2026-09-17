#include <stdio.h>

int main() {
    int horaInicio, minutoInicio, segundoInicio;
    long duracaoSegundos;
    long totalSegundosInicio, totalSegundosFim;
    int horaFim, minutoFim, segundoFim;

    printf("Digite o horario de inicio do experimento\n");
    printf("Horas: ");
    scanf("%d", &horaInicio);
    printf("Minutos: ");
    scanf("%d", &minutoInicio);
    printf("Segundos: ");
    scanf("%d", &segundoInicio);

    printf("Digite a duracao do experimento (em segundos): ");
    scanf("%ld", &duracaoSegundos);

    totalSegundosInicio = horaInicio * 3600 + minutoInicio * 60 + segundoInicio;

    totalSegundosFim = totalSegundosInicio + duracaoSegundos;

    totalSegundosFim = totalSegundosFim % 86400;

    horaFim = totalSegundosFim / 3600;
    minutoFim = (totalSegundosFim % 3600) / 60;
    segundoFim = totalSegundosFim % 60;

    printf("\nHorario de termino do experimento: %02d:%02d:%02d\n", horaFim, minutoFim, segundoFim);

    return 0;
}