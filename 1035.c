/*
Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A, e a soma de C com D for maior que a soma de A e B e se C e D, ambos, forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".

Entrada
Quatro números inteiros A, B, C e D.

Saída
Mostre a respectiva mensagem após a validação dos valores.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c, d, soma_a_b, soma_c_d, soma_a_d, par = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    if (a % 2 == 0)
    {
        par = 1;
    }
    else
    {
        par = 0;
    }

    soma_a_b = a + b;
    soma_c_d = c + d;

    if (b > c && d > a && soma_c_d > soma_a_b && (c > 0 && d > 0) && par != 0)
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    return 0;
}