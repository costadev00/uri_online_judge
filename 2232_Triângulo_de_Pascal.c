/*

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t, n, res = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        for (int j = 0; j < n; j++)
        {
            res += pow(2, j);
        }
        printf("%d\n", res);
        res = 0;
    }
    return 0;
}