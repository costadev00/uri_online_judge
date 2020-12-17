/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x, y, z;
    float res = 0;
    scanf("%f %f %f", &x, &y, &z);
    res = x / (y + z);
    printf("%.2f\n", res);
    return 0;
}