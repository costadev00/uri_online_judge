#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, j;
    string x, y;
    string r;
    int pos = 0;
    cin >> n;
    while (n--)
    {

        cin >> x >> y;
        pos = x.size() - y.size();
        if (pos > x.size())
        {

            cout << "nao encaixa\n";
            continue;
        }
        r = x.substr(pos, y.size());
        // cout << << endl;
        //     for (int i = 0; i < x.length(); i++)
        //     {
        //         if (x[i] == y[j])
        //         {
        //             j++;
        //         }
        //     }
        // }
        if (y == r)
        {
            cout << "encaixa\n";
        }
        else
        {
            cout << "nao encaixa\n";
        }
        x.clear();
        y.clear();
        r.clear();
        pos = 0;
    }
    return 0;
}