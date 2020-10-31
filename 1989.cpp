/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long long aux = 0, m, n, vetep, res = 0;
    do
    {
        cin >> n >> m;

        if (n == -1 && m == -1)
        {
            exit(0);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> vetep;
            aux += vetep;
            res += (aux * m);
        }
        printf("%lld\n", res);
        res = 0;
        aux = 0;
    } while (n != -1 && m != 1);

    return 0;
}