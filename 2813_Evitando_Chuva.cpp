/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, cont_casa = 0, cont_esc = 0, c = 0, e = 0;
    char sd[500], sn[500];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> sd;
        cin >> sn;
        if (strcmp(sd, "chuva") == 0)
        {
            e++;
            if (c > 0)
            {
                c--;
            }
            else
            {
                cont_casa++;
            }
        }
        if (strcmp(sn, "chuva") == 0)
        {
            c++;
            if (e > 0)
            {
                e--;
            }
            else
            {
                cont_esc++;
            }
        }
    }
    printf("%d %d\n", cont_casa, cont_esc);
    return 0;
}