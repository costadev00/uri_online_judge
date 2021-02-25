#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string st;
    while (getline(cin, st))
    {
        if (st == "esquerda")
        {
            cout << "ingles\n";
        }
        else if (st == "direita")
        {
            cout << "frances\n";
        }
        else if (st == "nenhuma")
        {
            cout << "portugues\n";
        }
        else
        {
            cout << "caiu\n";
        }
    }
    return 0;
}