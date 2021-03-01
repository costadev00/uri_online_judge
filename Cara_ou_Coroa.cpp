#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, mary_count = 0, jhon_count = 0, r;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        while (n--)
        {
            cin >> r;
            if (r == 1)
            {
                jhon_count++;
            }
            else
            {
                mary_count++;
            }
        }
        printf("Mary won %d times and John won %d times\n", mary_count, jhon_count);
        mary_count = 0, jhon_count = 0;
    }
    return 0;
}