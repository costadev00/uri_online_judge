#include<stdio.h>
int main()
{

    int h, z, l;
    scanf("%d %d %d", &h, &z, &l);
    if ((h > z && h < l) || (h > l && h < z))
        printf("huguinho\n");
    else if ((z > h && z < l) || (z>l && z<h))
        printf("zezinho\n");
    else
        printf("luisinho\n");

        return 0;
}