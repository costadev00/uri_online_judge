#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int j = 0, cont = 0;
    char n[20], cpf[13];
    while (cin >> n)
    {
        for (int i = 0; i < strlen(n); i++)
        {
            if (n[i] != '.' && n[i] != '-')
            {
                cpf[j] = n[i];
                j++;
            }
        }

        int i = 0;
        while (cont < 3)
        {

            for (int k = 0; k < 3; k++)
            {
                printf("%c", cpf[i]);
                i++;
            }
            printf("\n");
            cont++;
        }

        for (int k = 0; k < 2; k++)
        {
            printf("%c", cpf[i]);
            i++;
        }
    }
    printf("\n");
    return 0;
}
