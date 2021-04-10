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
    fastio;
    int n;
    cin >> n;
    while (n--)
    {
        int k, cont = 0;
        cin >> k;
        string l[k];
        for (int i = 0; i < k; i++)
        {
            cin >> l[i];
        }
        for (int i = 0; i < k; i++)
        {
            if (l[i] != l[+1])
            {
                cont++;
                break;
            }
        }
        if (cont > 0)
        {

            cout << "ingles\n";
        }
        else
        {
            cout << l[0] << endl;
        }
    }
    return 0;
}