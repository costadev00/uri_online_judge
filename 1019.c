/*
Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

Entrada
O arquivo de entrada contém um valor inteiro N.

Saída
Imprima o tempo lido no arquivo de entrada (segundos), convertido para horas:minutos:segundos, conforme exemplo fornecido.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, horas, horas_seg, minutos, segundos;

    horas_seg = 3600;

    scanf("%d", &n);

    horas = (n / horas_seg);
    minutos = (n - (horas_seg * horas)) / 60;
    segundos = (n - (horas_seg * horas) - (minutos * 60));

    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}