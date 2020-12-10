#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, res = 0, cont = 0, aux = 0;
    cin >> n;
    int vel;
    bool t = true;
    for (int i = 1; i <= n; i++)
    {
        cin >> vel;
        if (t)
        {
            aux = vel;
            t = false;
        }

        if (aux > vel)
        {
            res = i;
            break;
        }
        aux = vel;
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     if (vel[i + 1] < vel[i])
    //     {
    //         res = i;
    //         break;
    //     }
    // }
    printf("%d\n", res);
    return 0;
}