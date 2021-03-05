//TODO SOLVE
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    set<string> s;
    string nome, opcao;
    do
    {
        cin >> nome;
        if (nome == "FIM")
        {
            break;
        }
        cin >> opcao;
        s.insert(nome);
        // if (opcao == "YES")
        // {
        // }
    } while (nome != "FIM");
    for (auto x : s)
    {
        cout << x << endl;
    }

    return 0;
}