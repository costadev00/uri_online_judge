#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int h, e, a, o, w, x, lb = 0, lm = 0;
    scanf("%d %d %d %d %d %d", &h, &e, &a, &o, &w, &x);
    lb = h + e + a;
    lm = o + w;

    if (lb <= lm)
    {
        lb += x;
    }
    if (lb > lm)
    {
        cout << "Middle-earth is safe.\n";
    }
    else
    {
        cout << "Sauron has returned.\n";
    }

    return 0;
}