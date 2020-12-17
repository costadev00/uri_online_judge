/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int vet[3], x, vet2[3];
    cin >> vet[0] >> vet[1] >> vet[2];
    x = sizeof(vet) / sizeof(vet[0]);
    vet2[0] = vet[0];
    vet2[1] = vet[1];
    vet2[2] = vet[2];
    sort(vet, vet + x);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", vet[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", vet2[i]);
    }
    return 0;
}