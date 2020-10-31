/*
TODO: solve 
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int EstaOrdemCrescente(int vetor[])
{

    if (vetor[i - 1] > vetor[i])
        return 1;
    return 0;
}
int main()
{
    int n, flag = 0, aux_flag = 0;
    bool flag_vale = false, flag_pico = false;
    cin >> n;
    int vet[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (aux_flag == 0)
        {
            flag = EstaOrdemCrescente(vet);
            aux_flag++;
            qsort(vet);
        }
        if (flag == 1)
        {
            flag_pico = true;
        }
        else
        {
            flag_vale = true;
        }
        if (flag_vale)
        {
            EstaOrdemCrescente(vet);
        }
    }
    printf("%d\n", flag);
    // for (int i = 0; i <= n; i++)
    // {
    //     if (aux_flag == 0)
    //     {
    //         if (vet[i + 1] > vet[i])
    //         {
    //             flag = 1;
    //             flag_pico = true;
    //         }
    //         else
    //         {
    //             flag = 1;
    //             flag_vale = true;
    //         }
    //         aux_flag++;
    //     }
    //     else if (flag_vale)
    //     {
    //         if (vet[i] > vet[i + 1])
    //         {
    //             flag = 1;
    //         }
    //         else
    //         {
    //             flag = 0;
    //             break;
    //         }
    //         flag_pico = true;
    //     }
    //     else if (flag_pico)
    //     {
    //         if (vet[i] < vet[i + 1])
    //         {
    //             flag = 1;
    //         }
    //         else
    //         {
    //             flag = 0;
    //             break;
    //         }
    //         flag_vale = true;
    //     }
    // }
    printf("%d\n", flag);
    return 0;
}
