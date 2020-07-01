/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double salario, salario_novo;
    scanf("%lf", &salario);

    if (salario > 0 && salario <= 400)
    {
        salario_novo = salario + salario * 15 / 100;
        printf("Novo salario: %.2lf\n", salario_novo);
        printf("Reajuste ganho: %.2lf\n", salario * 15 / 100);
        printf("Em percentual: 15 %%\n");
    }
    else if (salario >= 400.01 && salario <= 800.00)
    {
        salario_novo = salario + salario * 12 / 100;
        printf("Novo salario: %.2lf\n", salario_novo);
        printf("Reajuste ganho: %.2lf\n", salario * 12 / 100);
        printf("Em percentual: 12 %%\n");
    }
    else if (salario >= 800.01 && salario <= 1200)
    {
        salario_novo = salario + salario * 10 / 100;
        printf("Novo salario: %.2lf\n", salario_novo);
        printf("Reajuste ganho: %.2lf\n", salario * 10 / 100);
        printf("Em percentual: 10 %%\n");
    }
    else if (salario >= 1200.01 && salario <= 2000)
    {
        salario_novo = salario + salario * 7 / 100;
        printf("Novo salario: %.2lf\n", salario_novo);
        printf("Reajuste ganho: %.2lf\n", salario * 7 / 100);
        printf("Em percentual: 7 %%\n");
    }
    else if (salario > 2000)
    {
        salario_novo = salario + salario * 4 / 100;
        printf("Novo salario: %.2lf\n", salario_novo);
        printf("Reajuste ganho: %.2lf\n", salario * 4 / 100);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}