#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    list<string> l;
    set<string> s1, s2;
    int maior = 0;
    string nome, opcao, amigo;
    while (cin >> nome && nome != "FIM")
    {
        cin >> opcao;
        if (nome == "FIM")
        {
            break;
        }
        if (opcao == "YES")
        {
            if (nome.length() > maior)
            {
                maior = nome.length();
                amigo = nome;
            }
            s1.insert(nome);
        }
        else
            s2.insert(nome);
    }
    for (auto i : s1)
        cout << i << endl;
    for (auto i : s2)
        cout << i << endl;
    cout << endl;
    cout << "Amigo do Habay:\n";
    cout << amigo << endl;
    return 0;
}