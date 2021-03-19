#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    string frase = "Entao eh Natal!";
    while (cin >> n)
    {

        for (int i = 0; i < frase.length(); i++)
        {
            cout << frase[i];
            if (frase[i] == 'a')
            {
                for (int j = 1; j < n; j++)
                {
                    cout << 'a';
                }
            }
        }
        cout << "\n";
    }
    return 0;
}