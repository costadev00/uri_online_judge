/*
TODO: SOLVE
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, x[2000], j, k = 0, acm;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        acm = 0;
        for (int j = 0; j < 2000; j++)
        {
            if (x[i] == j)
            {
                acm++;
            }
        }
        printf("%d aparece %d vez(es)\n", x[i], acm);
    }
    return 0;
}