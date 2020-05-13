/*
Joaozinho quer calcular e mostrar a quantidade de litros de
combustível gastos em uma viagem, ao utilizar um automóvel que
faz 12 KM/L. Para isso, ele gostaria que você 
o auxiliasse através de um simples programa.
Para efetuar o cálculo, deve-se fornecer 
o tempo gasto na viagem (em horas) e a velocidade 
média durante a mesma (em km/h).
Assim, pode-se obter distância percorrida e, em seguida,
calcular quantos litros seriam necessários.
Mostre o valor com 3 casas decimais após o ponto.

Entrada
O arquivo de entrada contém dois inteiros. O primeiro é o tempo 
gasto na viagem (em horas) e o segundo é a velocidade 
média durante a mesma (em km/h).

Saída
Imprima a quantidade de litros necessária para realizar a viagem,
 com três dígitos após o ponto decimal
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int horas_gastas, vel_media;
    double litros;
    scanf("%d", &horas_gastas);
    scanf("%d", &vel_media);
    litros = (vel_media * horas_gastas);
    printf("%.3lf\n", litros / 12);
    return 0;
}