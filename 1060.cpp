/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, acm2 = 0, acm3 = 0, acm4 = 0, acm5 = 0;
    cin >> n;
    int l;
    for (int i = 0; i < n; i++)
    {
        cin >> l;
        if (l % 2 == 0)
        {
            acm2++;
        }
        if (l % 3 == 0)
        {
            acm3++;
        }
        if (l % 4 == 0)
        {
            acm4++;
        }
        if (l % 5 == 0)
        {
            acm5++;
        }
    }
    printf("%d Multiplo(s) de 2\n", acm2);
    printf("%d Multiplo(s) de 3\n", acm3);
    printf("%d Multiplo(s) de 4\n", acm4);
    printf("%d Multiplo(s) de 5\n", acm5);
    return 0;
}