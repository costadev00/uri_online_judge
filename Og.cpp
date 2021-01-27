#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int l, r;
    do
    {
        cin >> l >> r;
        if (l == 0 && r == 0)
        {
            break;
        }
        printf("%d\n", l + r);
    } while (l != 0 && r != 0);

    return 0;
}