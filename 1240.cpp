/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a % b == 0)
        {
            printf("nao encaixa\n");
        }
        else
        {
            printf("encaixa\n");
        }
    }

    return 0;
}