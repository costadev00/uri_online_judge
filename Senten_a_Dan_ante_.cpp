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
    string st;
    int aux = 0;
    char ultimo;
    while (getline(cin, st))
    {
        for (int i = 0; i < st.length(); i++)
        {
            if (st[i] != ' ')
            {
                st[i] = toupper(st[i]);
                ultimo = toupper(st[i]);
                aux = i;
                break;
            }
        }

        for (int i = aux + 1; i < st.length(); i++)
        {
            if (st[i] == ' ')
            {
                continue;
            }
            if (ultimo == toupper(ultimo))
            {
                st[i] = tolower(st[i]);
                ultimo = st[i];
            }
            else
            {
                st[i] = toupper(st[i]);
                ultimo = st[i];
            }
        }
        cout << st << endl;
    }
    return 0;
}