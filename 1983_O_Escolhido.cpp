/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, matr, res = 0;
    float nota, maior = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> matr >> nota;
        if (nota > maior)
        {
            maior = nota;
            res = matr;
        }
    }
    if (maior >= 8)
    {
        printf("%d\n", res);
    }
    else
    {
        printf("Minimum note not reached\n");
    }
    return 0;
}