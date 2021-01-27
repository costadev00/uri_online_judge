#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        printf("%c", frase[i]);
    }
    printf("\n");
    return 0;
}