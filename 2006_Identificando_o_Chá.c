/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, res_cont = 0, p;
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &p);
        if (p == n)
        {
            res_cont++;
        }
    }
    printf("%d\n", res_cont);
    return 0;
}