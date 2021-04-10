#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    int casos = 0;
    string n1, n2;

    while (cin >> n1 >> n2)
    {
        auto sub = 0u, pos = 0u;

        for (int i = 0; i <= n2.size() - n1.size(); i++)
        {
            bool is = true;
            for (int j = 0; j < n1.size() && is; j++)
            {
                is = (n1[j] == n2[i + j]);
            }
            if (is)
            {
                sub++;
                if (i + 1 > pos)
                {
                    pos = i + 1;
                }
            }
        }

        cout << "Caso #" << ++casos << ":\n";
        if (sub == 0)
        {
            cout << "Nao existe subsequencia\n";
        }
        else
        {

            cout << "Qtd.Subsequencias: " << sub << endl;
            cout << "Pos: " << pos << endl;
        }
        cout << endl;
    }

    return 0;
}