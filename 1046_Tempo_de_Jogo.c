/*
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro,
 tendo uma duração mínima de 1 hora e máxima de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

Saída
Apresente a duração do jogo conforme exemplo abaixo.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int hora_inicio = 0, hora_fim = 0, total = 0;
    scanf("%d", &hora_inicio);
    scanf("%d", &hora_fim);
    do
    {
        total++;
        hora_inicio++;
        if (hora_inicio == 24)
        {
            hora_inicio = 0;
        }
    } while (hora_inicio != hora_fim);

    printf("O JOGO DUROU %d HORA(S)\n", total);
    return 0;
}