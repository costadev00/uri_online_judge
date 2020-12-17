/*
TODO: SOLVE
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a1, m1, d1, a2, m2, d2, res = 0;
    bool ano_bi = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        scanf("%d-%d-%d %d-%d-%d", &a1, &m1, &d1, &a2, &m2, &d2);
        if (a1 != a2)
        {
            if (a1 % 4 == 0 || a2 % 4 == 0)
            {
                res += (a1 - a2) * 366;
                ano_bi = true;
            }
            else
            {
                res += (a1 - a2) * 365;
            }
        }
        if (m1 != m2)
        {
            if ((m1 % 2 == 0 || m2 % 2 == 0) && (m1 != 8 || m2 != 8))
            {
                if (m1 == 2 && ano_bi)
                {
                    res += (m1 - m2) * 29;
                }
                else if (m2 == 2 && !ano_bi)
                {
                    res += (m1 - m2) * 28;
                }
                else
                {
                    res += (m1 - m2) * 30;
                }
            }
            else
            {
                res += (m1 - m2) * 31;
            }
        }
        if (d1 != d2)
        {
            res += (d1 - d2);
        }
        printf("%d\n", abs(res));
        res = 0;
    }
    return 0;
}