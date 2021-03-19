#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{

    int n;
    cin >> n;
    char *romanos[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
    int arabicos[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    // acha a quantidade de elementos no array
    int indice = (sizeof(arabicos) / sizeof(arabicos[0])) - 1;
    while (n > 0)
    {
        if (n >= arabicos[indice])
        {
            printf("%s", romanos[indice]);
            n -= arabicos[indice];
        }
        else
        {
            indice--;
        }
    }
    printf("\n");
}