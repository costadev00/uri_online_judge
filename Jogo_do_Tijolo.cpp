#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n = 0;
    string nome;
    string nome2;
    cin >> nome;
    cin >> nome2;
    if (nome == nome2)
    {
        printf("alou\n");
    }
    n = nome.length();
    printf("%d\n", n);
    return 0;
}