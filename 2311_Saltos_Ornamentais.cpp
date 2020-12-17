/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    float n, gd, vetN[7], maior = 0, menor = 1, acm = 0, res = 0;
    string nome;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nome;
        cin >> gd;

        for (int j = 0; j < 7; j++)
        {
            cin >> vetN[j];
            acm += vetN[j];
        }
        maior = vetN[0];
        menor = vetN[0];

        for (int j = 0; j < 7; j++)
        {
            if (maior < vetN[j])
            {
                maior = vetN[j];
            }
            if (menor > vetN[j])
            {
                menor = vetN[j];
            }
        }
        res = (acm - maior - menor) * gd;
        cout << nome;
        printf(" %.2f\n", res);
        res = 0;
        acm = 0;
    }
    return 0;
}