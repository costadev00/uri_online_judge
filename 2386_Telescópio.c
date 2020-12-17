/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int aber, est, fotons, res = 0;
    scanf("%d", &aber);
    scanf("%d", &est);
    for (int i = 0; i < est; i++)
    {
        scanf("%d", &fotons);
        if (fotons * aber >= 40000000)
        {
            res++;
        }
    }

    printf("%d\n", res);
    return 0;
}