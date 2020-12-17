/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double salario, imposto = 0, diferenca;
    scanf("%lf", &salario);

    if (salario > 4500)
    {
        imposto = 1000 * 0.08 + 1500 * 0.18;
        diferenca = salario - 4500;
        imposto = imposto + diferenca * 0.28;
    }
    else if (salario > 3000)
    {
        imposto = 1000 * 0.08;
        diferenca = salario - 3000;
        imposto = imposto + diferenca * 0.18;
    }
    else if (salario > 2000)
    {
        diferenca = salario - 2000;
        imposto = diferenca * 0.08;
    }
    if (salario > 2000)
    {

        printf("R$ %.2lf\n", imposto);
    }
    else
    {
        printf("Isento\n");
    }
    return 0;
}