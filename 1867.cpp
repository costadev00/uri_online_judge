/*
TODO : SOLVE
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

unsigned long long somarDigitos(unsigned long long numero)
{
    unsigned long long soma = 0;

    while (numero != 0)
    {
        soma += numero % 10;
        numero = numero / 10;
    }

    return soma;
}

int main()
{
    unsigned long long n, m, nres = 0, mres = 0;
    do
    {
        cin >> n;
        cin >> m;

        if (n == 0 && m == 0)
        {
            exit(0);
        }
        nres = somarDigitos(n);
        while (nres >= 10)
        {
            nres = somarDigitos(nres);
        }
        mres = somarDigitos(m);
        while (mres >= 10)
        {
            mres = somarDigitos(mres);
        }
        if (nres > mres)
        {
            printf("1\n");
        }
        else if (mres > nres)
        {
            printf("2\n");
        }
        else
        {
            printf("0\n");
        }

    } while (n != 0 && m != 0);

    return 0;
}