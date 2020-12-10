#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    char m[1001], b;
    int cont = 0;
    cin >> m;
    for (int i = 0; i < strlen(m); i++)
    {
        if (m[i] == '1')
        {
            cont++;
        }
    }
    if (cont % 2 == 0)
    {
        for (int i = 0; i < strlen(m); i++)
        {
            printf("%c", m[i]);
        }
        printf("0\n");
    }
    else
    {
        for (int i = 0; i < strlen(m); i++)
        {
            printf("%c", m[i]);
        }
        printf("1\n");
    }
    return 0;
}