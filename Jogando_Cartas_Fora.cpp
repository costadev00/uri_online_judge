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
    while (cin >> n && n)
    {
        list<int> p, disc;
        for (int i = 1; i <= n; i++)
        {
            p.push_back(i);
        }
        while (p.size() > 1)
        {
            disc.push_back(p.front());
            p.pop_front();
            int x = p.front();
            p.pop_front();
            p.push_back(x);
        }
        cout << "Discarded cards: ";
        while (!disc.empty())
        {
            if (disc.size() == 1)
                cout << disc.front() << endl;
            else
                cout << disc.front() << ", ";
            disc.pop_front();
        }
        cout << "Remaining card: ";
        for (auto i : p)
            cout << i;
        cout << endl;
    }
    return 0;
}