#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    string nome, pres;
    map<string, string> m;
    while (cin >> nome >> pres)
    {
        m[nome] = pres;
        if (nome == "--" && pres == "--")
        {
            while (cin >> nome)
            {
                auto it = m.find(nome);
                if (it != m.end())
                {
                    cout << "Child: " << nome << endl;
                    cout << "Gift " << m[nome]<<endl;
                }
                else
                    cout << "404 not found\n";
                cout<<endl;
            }
            m.clear();
        }
    }
    return 0;
}