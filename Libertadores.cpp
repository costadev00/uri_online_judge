#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    char c;
    cin >> n;
    while (n--)
    {
        int m, v, time1 = 0, time2 = 0, s1 = 0, s2 = 0, gat1 = 0, gat2 = 0;
        cin >> m >> c >> v;
        time1 += m;
        time2 += v;
        gat2 = v;

        cin >> m >> c >> v;
        time1 += v;
        time2 += m;
        gat1 = v;

        s1 = time1 - time2;
        s2 = time2 - time1;

        if (time1 > time2)
        {
            printf("Time 1\n");
        }
        if (time2 > time1)
        {
            printf("Time 2\n");
        }
        if (time1 == time2)
        {
            if (s1 > s2)
            {
                printf("Time 1\n");
            }
            else if (s2 > s2)
            {
                printf("Time 2\n");
            }
            else if (gat1 > gat2)
            {
                printf("Time 1\n");
            }
            else if (gat2 > gat1)
            {
                printf("Time 2\n");
            }
            else
            {
                printf("Penaltis\n");
            }
        }
    }
    return 0;
}