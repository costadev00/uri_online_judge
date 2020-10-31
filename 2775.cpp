/*
TODO:SOLVE
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main()
{
    int n = 0, res = 0;
    int vet_prod[n], vet_temp[n];
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> vet_prod[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> vet_temp[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (vet_prod[j] > vet_prod[j + 1])
                {
                    swap(&vet_prod[j], &vet_prod[j + 1]);
                    res += vet_temp[i];
                }
            }
        }
        printf("%d\n", res);
        res = 0;
    }

    return 0;
}