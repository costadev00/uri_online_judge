#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

double fibonnacci(double n)
{
    return ((1 / sqrt(5)) * pow(((1 + sqrt(5)) / 2), n) - (1 / sqrt(5)) * pow(((1 - sqrt(5)) / 2), n));
}
int main()
{
    fastio;
    double n, res = 0;
    cin >> n;
    res = fibonnacci(n);
    printf("%.1lf\n", res);
    return 0;
}