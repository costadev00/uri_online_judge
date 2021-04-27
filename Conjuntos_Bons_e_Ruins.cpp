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
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int n;
    vector<string> vet;
    string st;
    while (cin >> n && n)
    {
        bool ruim = false;
        while (n--)
        {
            cin >> st;
            vet.push_back(st);
        }
        int c = 1;
        for (int i = 0; i < vet.size(); i++)
        {
            for (int j = 0; j < vet.size(); j++)
            {
                if (i == j)
                    continue;
                int found = vet[j].find(vet[i]);

                if (found != string::npos)
                {
                    ruim = true;
                    c = 0;
                    break;
                }
            }
            if (c == 0)
                break;
        }
        vet.clear();
        if (ruim)
        {
            cout << "Conjunto Ruim\n";
        }
        else
        {
            cout << "Conjunto Bom\n";
        }
    }

    return 0;
}