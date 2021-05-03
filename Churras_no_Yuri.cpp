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
struct Carne
{
    string nome;
    int val;
};
bool compare(Carne a, Carne b)
{
    return a.val < b.val;
}
int main()
{
    fastio;
    int n, val;
    string nome;
    while (cin >> n)
    {
        Carne carne[n];
        int i = 0, aux = 0;
        aux = n;
        while (aux--)
        {
            cin >> nome;
            cin >> val;
            carne[i].nome = nome;
            carne[i].val = val;
            i++;
        }
        stable_sort(carne, carne + n, compare);
        for (int j = 0; j < n; j++)
        {
            if (j + 1 != n)
                cout << carne[j].nome << ' ';
            else
                cout << carne[j].nome;
        }
        cout << endl;
    }
    return 0;
}