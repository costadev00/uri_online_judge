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
        float soma = 0;
        for (int i = strlen(n) - 1; i >= 0; --i)
        {
            soma += (n[i] - 'A' + 1) * pow(26, j);
            j++;
        }

        if (soma <= 16384)
        {
            cout << (int)soma << endl;
        }
        else
        {
            cout << "Essa coluna nao existe Tobias!\n";
        }
    }
    return 0;
}