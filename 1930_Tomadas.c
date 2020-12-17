/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t1, t2, t3, t4, res = 0;
    scanf("%d", &t1);
    scanf("%d", &t2);
    scanf("%d", &t3);
    scanf("%d", &t4);
    res += t1 + t2 + t3 + t4;
    res -= 3;
    printf("%d\n", res);
    return 0;
}