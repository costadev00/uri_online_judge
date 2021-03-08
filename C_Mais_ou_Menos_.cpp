//TODO SOLVE
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t = 1, ali, res, qtd;
    string alimento;
    while (cin >> t && t)
    {
        ali = 0;
        res = 0;
        qtd = 0;
        if (t == 0)
        {
            return 0;
        }
        for (int i = 0; i < t; i++)
        {
            cin >> qtd;
            cin.ignore();
            getline(cin, alimento);
            // getchar();
            if (alimento == "suco de laranja")
            {
                ali = 120;
            }
            else if (alimento == "morango fresco" || alimento == "mamao")
            {
                ali = 85;
            }
            else if (alimento == "goiaba vermelha")
            {
                ali = 70;
            }
            else if (alimento == "manga")
            {
                ali = 56;
            }
            else if (alimento == "laranja")
            {
                ali = 50;
            }
            else if (alimento == "brocolis")
            {
                ali = 34;
            }
            res += ali * qtd;
        }
        // printf("res = %d\n", res);
        if (res >= 110 && res <= 130)
        {
            printf("%d mg\n", res);
        }
        else if (res > 130)
        {
            printf("Menos %d mg\n", res - 130);
        }
        else if (res < 110)
        {
            printf("Mais %d mg\n", 110 - res);
        }
    }
    return 0;
}