/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 0, res = 0, acm = 0;

    do
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            res = pow((n - i), 2);
            acm = acm + res;
        }
        printf("%d\n", acm);
        acm = 0;
    } while (n != 0);
    return 0;
}