/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 0, x = 0, acm_in = 0, acm_out = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x >= 10 && x <= 20)
        {
            acm_in++;
        }
        else
        {
            acm_out++;
        }
    }
    printf("%d in\n", acm_in);
    printf("%d out\n", acm_out);
    return 0;
}