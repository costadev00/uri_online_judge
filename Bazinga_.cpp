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
    char s[50], r[50];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s >> r;
        if (strcmp(s, r) == 0)
        {
            printf("Caso #%d: De novo!\n", i);
            continue;
        }
        if (strcmp(s, "tesoura") == 0 && strcmp(r, "papel") == 0)
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if (strcmp(s, "papel") == 0 && strcmp(r, "pedra") == 0)
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if (strcmp(s, "pedra") == 0 && strcmp(r, "lagarto") == 0)
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if (strcmp(s, "lagarto") == 0 && strcmp(r, "Spock") == 0)
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if (strcmp(s, "Spock") == 0 && strcmp(r, "tesoura") == 0)
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if (strcmp(s, "tesoura") == 0 && strcmp(r, "lagarto") == 0)
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if (strcmp(s, "lagarto") == 0 && strcmp(r, "papel") == 0)
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if (strcmp(s, "papel") == 0 && strcmp(r, "Spock") == 0)
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if (strcmp(s, "Spock") == 0 && strcmp(r, "pedra") == 0)
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else if (strcmp(s, "pedra") == 0 && strcmp(r, "tesoura") == 0)
        {
            printf("Caso #%d: Bazinga!\n", i);
        }
        else
        {
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }

    return 0;
}