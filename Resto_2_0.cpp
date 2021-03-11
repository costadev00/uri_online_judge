//TIMELIMIT
//TODO: SOLVE
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    unsigned long long int a, b, resto;
    scanf("%lld", &a);
    scanf("%lld", &b);

ponto:

    resto = a - b;
    a = resto;
    if (a > b)
    {
        goto ponto;
    }

    printf("%d\n", resto);
    return 0;
}