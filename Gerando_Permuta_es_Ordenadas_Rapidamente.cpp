#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
set<string> s;
void permute(string a, int l, int r)
{
    // Base case
    if (l == r)
        s.insert(a);
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l + 1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}

int main()
{
    fastio;
    int n;
    cin >> n;
    string xp;
    while (n--)
    {
        cin >> xp;
        permute(xp, 0, xp.length() - 1);
        for (auto i : s)
        {
            cout << i << endl;
        }
        s.clear();
        cout << endl;
    }
    return 0;
}