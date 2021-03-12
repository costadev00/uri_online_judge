#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int e, f, c, soma = 0, cont = 0;
    cin >> e >> f >> c;
    soma = e + f;
    while (soma >= c)
    {
        soma -= c;
        cont++;
        soma++;
    }
    cout << cont << endl;
    return 0;
}