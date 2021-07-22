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

int maxOverlap(vector<int> &start, vector<int> &end)
{

    int n = start.size();

    // Finding maximum starting time O(n)
    int maxa = *max_element(start.begin(), start.end());

    // Finding maximum ending time O(n)
    int maxb = *max_element(end.begin(), end.end());

    int maxc = max(maxa, maxb);

    int x[maxc + 2];
    memset(x, 0, sizeof x);

    int cur = 0, idx;

    // Creating and auxiliary array O(n)
    for (int i = 0; i < n; i++)
    {
        //Lazy addition
        ++x[start[i]];
        --x[end[i] + 1];
    }

    int maxy = INT_MIN;

    //Lazily Calculating value at index i O(n)
    for (int i = 0; i <= maxc; i++)
    {
        cur += x[i];
        if (maxy < cur)
        {
            maxy = cur;
            idx = i;
        }
    }
    return maxy;
}
int main()
{
    fastio;
    int t, ti, to, x;
    char c;
    int n;
    while (cin >> n)
    {

        while (cin >> t)
        {
            int cont = 0, tot = 0, i = 0;
            vi arr;
            vi exit;
            while (t--)
            {

                cin >> c;
                cin >> x;
                arr.pb(x);
                cin >> x;
                exit.pb(x);
                i++;
                if (c == 'N')
                {
                    // cont = maxOverlap(arr, exit);
                    tot = max(i, tot);
                }
            }
            tot = maxOverlap(arr, exit);
            cout << tot << endl;
        }
    }
    return 0;
}