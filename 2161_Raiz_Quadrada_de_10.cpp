/*
TODO: SOLVE
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    float res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        res += 3 + (1 / (6 + (1 / 6)));
    printf("%.10f\n", res);
    return 0;
}