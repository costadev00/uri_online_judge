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
    int n, b;
    do
    {
        cin >> n >> b;
        int bolas[b];
        for (int i = 0; i < b; i++)
        {
            cin >> bolas[i];
        }
    } while (n != 0 && b != 0);
    return 0;
}