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

bool isPerfectSquare(int x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0)
    {

        int sr = sqrt(x);

        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}

int maxb[51] = {0};
int last[51] = {0};
int lookup(int x)
{

    int prox = 1;
    int haste = 0;

    while (1)
    {
        bool isnNew = true;
        for (int i = 1; i <= haste; i++)
        {
            if (isPerfectSquare(last[i] + prox))
            {
                isnNew = false;
                last[i] = prox;
            }
        }

        if (isnNew)
        {
            maxb[haste] = prox - 1;
            last[++haste] = prox;

            if (haste >= x + 1)
                break;
        }

        prox++;
    }
    return last[haste] - 1;
}

int main()
{
    fastio;
    int n, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        cout << lookup(x) << endl;
    }
    return 0;
}