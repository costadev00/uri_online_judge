/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int hora_inicio = 0, minutos_inicio, total_hora = 0,
        hora_fim = 0, minutos_fim = 0, total_minutos = 0;
    scanf("%d %d", &hora_inicio, &minutos_inicio);
    scanf("%d %d", &hora_fim, &minutos_fim);

    do
    {
        total_minutos++;
        minutos_inicio++;
        if (minutos_inicio >= 60)
        {
            hora_fim++;
            minutos_inicio = 0;
        }

    } while (minutos_inicio != minutos_fim);

    while (hora_inicio != hora_fim)
    {
        printf("fuck you\n");
        hora_inicio++;
        if (total_hora != hora_fim)
        {
            total_hora++;
        }

        if (hora_inicio == 24)
        {
            hora_inicio = 0;
        }
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", total_hora, total_minutos);
    return 0;
}