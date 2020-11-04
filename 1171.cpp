/*
PS: I DONT KNOW BUT THIS CODE GET RUNTIME ERROR ON URI
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x[2001], acm2 = 0;
    cin >> n;
    int acm[n] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
    }
    sort(x, x + n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (x[i] == x[j])
            {
                acm[i]++;
                acm2++;
            }
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (x[i] != x[i + 1])
        {
            printf("%d aparece %d vez(es)\n", x[i], acm[i]);
        }
    }
    return 0;
}