#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string frase;

    getline(cin, frase);
    for (int i = 0; i < frase.length(); i++)
    {
        if (frase[i] == ',')
        {
            frase[i] = '\n';
        }
    }
    cout << frase << endl;
    return 0;
}