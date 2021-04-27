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
    int n, x, y, num;
    vector<int> vet;
    auto be = vet.begin();
    auto en = vet.end();
    while (cin >> n)
    {
        FOR(i, 0, n)
        {
            cin >> x >> y;
            for (int j = x; j <= y; j++)
                vet.push_back(j);
        }
        cin >> num;
        sort(vet.begin(), vet.end());

        bool f = true;
        auto pos = find(vet.begin(), vet.end(), num);
        if (pos == vet.end())
        {
            cout << num << " not found\n";
            vet.clear();
            continue;
        }

        for (auto it = vet.begin(); it != vet.end(); it++)
        {

            if (*it == num)
            {
                en = it;
            }
        }

        cout << num << " found from " << pos - vet.begin() << " to "
             << en - vet.begin() << endl;
        vet.clear();
    }
    return 0;
}