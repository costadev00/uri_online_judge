#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int p, j1, j2, r, a;
    bool j1par;
    cin >> p >> j1 >> j2 >> r >> a;
    if (p == 1)
    {
        j1par = true;
    }
    else
    {
        j1par = false;
    }

    if (r && a)
    {
        printf("Jogador 2 ganha!\n");
    }
    else if (r && !a)
    {
        printf("Jogador 1 ganha!\n");
    }
    else if (a && !r)
    {
        printf("Jogador 1 ganha!\n");
    }
    else
    {

        if (j1par && (j1 + j2) % 2 == 0)
        {
            printf("Jogador 1 ganha!\n");
        }
        else if (!j1par && (j1 + j2) % 2 != 0)
        {
            printf("Jogador 1 ganha!\n");
        }
        else
        {
            printf("Jogador 2 ganha!\n");
        }
    }
    return 0;
}