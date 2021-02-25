//TODO: SOLVE
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int x1, y1, x2, y2, n, x, y, t = 0, res = 0;
    while (cin >> x1 >> y1 >> x2 >> y2)
    {
        t++;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
        }
        printf("Teste\n%d\n", t);
        printf("%d\n", res);
    }

    return 0;
}