/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n[1000], t, i = 0;
    scanf("%d", &t);
    while (i <= 999)
    {

        for (int j = 0; j < t; j++)
        {
            n[i] = j;
            printf("N[%d] = %d\n", i, n[i]);
            if (i >= 999)
            {
                exit(0);
            }
            i++;
        }
    }
    printf("\n");
    return 0;
}
