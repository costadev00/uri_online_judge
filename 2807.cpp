/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, vet[40], aux = 0;
    cin >> n;
    int a, b = 0, c = 1;

    for (int i = 0; i <= n; i++)
    {
        if (i < 1)
        {
            a = 0;
        }
        else if (i == 1)
        {
            a = 1;
        }
        else
        {
            a = b + c;
            b = c;
            c = a;
        }
        vet[i] = a;
    }
    aux = n - 1;
    for (int i = n; i > 0; i--)
    {
        if (i != 1)
        {
            printf("%d ", vet[i]);
        }
        else
        {
            printf("%d\n", vet[i]);
        }
    }
    return 0;
}