#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, b, ad, dd, ld, ag, dg, lg, resd = 0, resg = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> b;
        cin >> ad >> dd >> ld;
        cin >> ag >> dg >> lg;
        if (ld % 2 == 0)
        {
            resd = ((ad + dd) / 2) + b;
        }
        else
        {
            resd = ((ad + dd) / 2);
        }
        if (lg % 2 == 0)
        {
            resg = ((ag + dg) / 2) + b;
        }
        else
        {
            resg = ((ag + dg) / 2);
        }
        if (resd > resg)
        {
            printf("Dabriel\n");
        }
        else if (resg > resd)
        {
            printf("Guarte\n");
        }
        else
        {
            printf("Empate\n");
        }
    }
    return 0;
}