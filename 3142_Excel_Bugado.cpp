#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    int cont, j;
    char n[200];
    while (cin >> n)
    {
        j = 0;
        long long int soma = 0;
        for (int i = strlen(n) - 1; i >= 0; --i)
        {
            soma += (n[i] - 'A' + 1) * (long long int)pow(26, j);
            j++;
        }

        if (soma <= 16384)
        {
            cout << soma << endl;
        }
        else
        {
            cout << "Essa coluna nao existe Tobias!\n";
        }
    }
    return 0;
}