#include <bits/stdc++.h>
//LCS ALGORITMO!
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void lcs(string x, string y)
{
    int m = x.length();
    int n = y.length();
    int res = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (x[i] == y[j])
            {
                int c = 0;
                for (int k = 0; k + i < m, k + j < n; k++)
                {
                    if (x[k + i] != y[k + j])
                        break;
                    c++;
                }
                if (c > res)
                    res = c;
            }
        }
    cout << res << endl;
}

int main()
{

    fastio;
    string s1, s2;

    while (getline(cin, s1) && getline(cin, s2))
    {
        lcs(s1, s2);
    }
    return 0;
}