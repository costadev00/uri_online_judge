/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, money = 0;
    char t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> c;
        if (t == 'V')
        {
            money += c;
        }
        else
        {
            money -= c;
        }
    }
    if (money > 0)
    {
        printf("A greve vai parar.\n");
    }
    else
    {
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    }
    return 0;
}