/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c, b, bo, m, l, res;
    scanf("%d", &c);
    c *= 300;
    scanf("%d", &b);
    b *= 1500;
    scanf("%d", &bo);
    bo *= 600;
    scanf("%d", &m);
    m *= 1000;
    scanf("%d", &l);
    l *= 150;
    res = c + b + bo + m + l + 225;
    printf("%d\n", res);
    return 0;
}