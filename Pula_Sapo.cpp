#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int p, n, aux = 0;
    bool flag = true;
    cin >> p >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        aux = a[i] - a[i + 1];
        if (abs(aux) > p)
        {
            flag = false;
            break;
        }
        aux = 0;
    }
    if (flag)
    {
        printf("YOU WIN\n");
    }
    else
    {
        printf("GAME OVER\n");
    }

    return 0;
}