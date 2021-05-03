#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int vet[50];
int num;

void verificar(int v, int p);

int main()
{
    int t, i, x;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        scanf("%d", &num);
        for (x = 0; x < 50; x++)
        {
            vet[x] = 0;
        }
        verificar(1, 0);

        int aux = vet[0];
        for (x = 1; x < num; x++)
        {
            if (aux < vet[x])
            {
                aux = vet[x];
            }
        }
        printf("%d\n", aux);
    }
    return 0;
}

void verificar(int v, int p)
{
    int soma, quadrado;
    if (p == num)
        return;

    if (vet[p] == 0 && p < num)
    {
        vet[p] = v;
        return verificar(v + 1, 0);
    }
    else
    {
        soma = vet[p] + v;
        quadrado = sqrt(soma);

        if (quadrado * quadrado == soma)
        {
            vet[p] = v;
            return verificar(v + 1, 0);
        }
        else
            return verificar(v, p + 1);
    }
}