#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) printf(args)
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

void getIndex(vector<int> v, int K)
{
    auto it = find(v.begin(), v.end(), K);

    // If element was found
    if (it != v.end())
    {

        // calculating the index
        // of K
        int index = it - v.begin();
        cout << index + 1 << endl;
    }
    else
    {
        // If the element is not
        // present in the vector
        cout << "-1" << endl;
    }
}

int main()
{
    fastio;
    int t, n, x;
    vi tempo;
    while (cin >> t)
    {
        while (t--)
        {

            cin >> n;
            while (n--)
            {
                cin >> x;
                tempo.pb(x);
            }
            int cont = 0, cont2 = 0;
            int min = *min_element(tempo.begin(), tempo.end());
            cont = count(tempo.begin(), tempo.end(), min);
            if (cont == 1)
                getIndex(tempo, min);
            else
            {
                for (int i = 0; i < tempo.size(); i++)
                {
                    if (tempo[i] == min)
                    {
                        if (cont2 + 1 == cont)
                            cout << i + 1;
                        else
                            cout << i + 1 << " ";
                        cont2++;
                    }
                }
                cout << endl;
            }
            tempo.clear();
        }
    }

    return 0;
}