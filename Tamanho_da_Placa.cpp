#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    long long int x, y, m, xi, yi;
    while (cin >> x >> y >> m)
        for (int i = 0; i < m; i++)
        {
            cin >> xi >> yi;
            if ((yi <= y && xi <= x) || (yi <= x && xi <= y))
            {
                cout << "Sim\n";
            }
            else
            {
                cout << "Nao\n";
            }
        }
    return 0;
}