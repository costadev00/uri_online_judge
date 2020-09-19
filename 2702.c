/*

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int rfd, rcd, rmd, rf, rc, rm, aux = 0, res = 0;
    scanf("%d %d %d", &rfd, &rcd, &rmd);
    scanf("%d %d %d", &rf, &rc, &rm);
    aux = rfd - rf;
    if (aux < 0)
    {
        res += aux;
    }
    aux = rcd - rc;
    if (aux < 0)
    {
        res += aux;
    }
    aux = rmd - rm;
    if (aux < 0)
    {
        res += aux;
    }
    printf("%d\n", abs(res));
    return 0;
}
