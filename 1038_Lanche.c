/*
Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cod, qtd;
    double preco;
    scanf("%d %d", &cod, &qtd);
    if (cod == 1)
    {
        preco = 4.00 * qtd;
    }
    else if (cod == 2)
    {
        preco = 4.50 * qtd;
    }
    else if (cod == 3)
    {
        preco = 5.00 * qtd;
    }
    else if (cod == 4)
    {
        preco = 2.00 * qtd;
    }
    else if (cod == 5)
    {
        preco = 1.50 * qtd;
    }
    printf("Total: R$ %.2lf\n", preco);
    return 0;
}