/*
TODO SOLVE
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string paises[n];
    int o[n], p[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> paises[i];
        // getchar();
        cin >> o[i] >> p[i] >> b[i];
        sort(o, o + n);
        sort(p, p + n);
        sort(b, b + n);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf(" %d %d %d\n", o[i], p[i], b[i]);
    }

    return 0;
}