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
    while (cin >> n)
    {
        list<int> p;
        vector<int> vet;
        for (int i = 1; i <= n; i++)
        {
            p.push_front(i);
        }
        while (p.size() > 1)
        {
            p.pop_back();
            vet.push_back(p.back());
            p.push_front(p.back());
            p.remove(p.back());
        }
        cout << "Discarded cards: ";
        for (int i = 0; i < vet.size(); i++)
        {
            if (i + 1 == vet.size())
                cout << vet[i] << endl;
            else
                cout << i << ", ";
        }
        cout << "Remaining card: ";
        for (auto i : p)
            cout << i;
        cout << endl;
    }
    return 0;
}