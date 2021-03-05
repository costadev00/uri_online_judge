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
    while (t != 0)
    {
        ali = 0;
        res = 0;
        qtd = 0;
        cin >> t;
        if (t == 0)
        {
            break;
        }
        for (int i = 0; i < t; i++)
        {
            cin >> qtd >> alimento;
            // getchar();
            if (alimento == "suco de laranja")
            {
                ali = 120;
            }
            else if (alimento == "morango fresco")
            {
                ali = 85;
            }
            else if (alimento == "mamao")
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
        printf("res = %d\n", res);
        if (res >= 110 && res <= 130)
        {
            printf("%d mg\n", res);
        }
        else if (res > 130)
        {
            res -= 130;
            printf("Menos %d mg", res);
        }
        else if (res < 110)
        {
            res -= 110;
            printf("Mais %d mg\n", abs(res));
        }
    }
    return 0;
}