/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int h, m, tot = 0;
    while (scanf("%d:%d", &h, &m) != EOF)
    {

        h = (((h * 60) + m + 60) - 480);
        if (h > 0)
        {
            printf("Atraso maximo: %d\n", h);
        }
        else
        {
            printf("Atraso maximo: 0\n");
        }
    }
    return 0;
}