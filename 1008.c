// Escreva um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário.
//  A seguir, mostre o número e o salário do funcionário, com duas casas decimais.

// Entrada
// O arquivo de entrada contém 2 números inteiros e 1 número com duas casas decimais, representando o número, quantidade de horas trabalhadas
// e o valor que o funcionário recebe por hora trabalhada, respectivamente.

// Saída
// Imprima o número e o salário do funcionário, conforme exemplo fornecido, com um espaço em branco antes e depois da igualdade.
//  No caso do salário, também deve haver um espaço em branco após o $.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num_fun, horas_trab;
    double valor_hora, salario = 0;
    scanf("%d", &num_fun);
    scanf("%d", &horas_trab);
    scanf("%lf", &valor_hora);
    salario = horas_trab * valor_hora;
    printf("NUMBER = %d\n", num_fun);
    printf("SALARY = U$ %.2lf\n", salario);
    return 0;
}