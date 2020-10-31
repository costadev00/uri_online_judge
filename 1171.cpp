/*
*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, x[2000], acm2 = 0;
    cin >> n;
    int acm[n] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (x[i] == x[j])
            {
                acm[i]++;
                acm2++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i - 1] != x[i])
        {
            printf("%d aparece %d vez(es)\n", x[i], acm[i]);
        }
    }
    return 0;
}