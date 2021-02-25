//TODO : SOLVE;
//passed but,taking timelimit
// tem de fazer com set
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
using namespace std;
int main()
{
    fastio;
    int i = 0, res = 0;
    bool flag = true;
    string st[10000], alr[10000];
    while (getline(cin, st[i]))
    {

        // for (int j = 0; j < i; j++)
        // {
        //     if (st[j] == st[i])
        //     {
        //         flag = false;
        //     }
        // }
        if (flag)
        {
            res++;
        }
        i++;
        flag = true;
    }
    printf("%d\n", res);
    return 0;
}