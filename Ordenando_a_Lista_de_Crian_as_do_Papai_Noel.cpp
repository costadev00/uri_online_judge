#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, contc = 0, contnc = 0;
    char c;
    cin >> n;
    string nomes[n];
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        if (c == '+')
        {
            contc++;
        }
        else
        {
            contnc++;
        }
        cin >> nomes[i];
    }
    sort(nomes, nomes + n);
    for (int i = 0; i < n; i++)
    {
        cout << nomes[i] << endl;
    }
    printf("Se comportaram: %d | Nao se comportaram: %d\n", contc, contnc);
    return 0;
}