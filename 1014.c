/*
Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total de combustível gasto (em litros).

Entrada
O arquivo de entrada contém dois valores: um valor inteiro X representando a distância total percorrida (em Km), e um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.

Saída
Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x;
    double y, consumo_medio;
    scanf("%d", &x);
    scanf("%lf", &y);
    consumo_medio = x / y;
    printf("%.3lf km/l\n", consumo_medio);
    return 0;
}