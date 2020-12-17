/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis
(cédulas) no qual o valor
pode ser decomposto.
As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1.
A seguir mostre o valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas de cada
tipo necessárias, conforme o exemplo fornecido. Não esqueça de imprimir 
o fim de linha após cada linha,caso contrário seu programa apresentará
a mensagem: “Presentation Error”.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cedulas = 100, valor = 0, total = 0,
        cont_100 = 0, cont_50 = 0, cont_20 = 0, cont_10 = 0, cont_5 = 0, cont_2 = 0, cont_1 = 0;
    scanf("%d", &valor);
    total = valor;
    do
    {
        if (total >= cedulas)
        {
            total = total - cedulas;
            cont_100++;
        }
        else if (total >= 50 && total < 100)
        {
            cedulas = 50;
            total = total - cedulas;
            cont_50++;
        }
        else if (total >= 20 && total < 50)
        {
            cedulas = 20;
            total = total - cedulas;
            cont_20++;
        }
        else if (total >= 10 && total < 20)
        {
            cedulas = 10;
            total = total - cedulas;
            cont_10++;
        }
        else if (total >= 5 && total < 10)
        {
            cedulas = 5;
            total = total - cedulas;
            cont_5++;
        }
        else if (total >= 2 && total < 5)
        {
            cedulas = 2;
            total = total - cedulas;
            cont_2++;
        }
        else
        {
            cedulas = 1;
            total = total - cedulas;
            cont_1++;
        }
        {
        }

    } while (total != 0);
    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", cont_100);
    printf("%d nota(s) de R$ 50,00\n", cont_50);
    printf("%d nota(s) de R$ 20,00\n", cont_20);
    printf("%d nota(s) de R$ 10,00\n", cont_10);
    printf("%d nota(s) de R$ 5,00\n", cont_5);
    printf("%d nota(s) de R$ 2,00\n", cont_2);
    printf("%d nota(s) de R$ 1,00\n", cont_1);
    return 0;
}