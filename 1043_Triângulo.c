/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double a = 0, b = 0, c = 0, tri = 0, area = 0;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        tri = 1;
    }

    if (tri != 0)
    {
        printf("Perimetro = %.1lf\n", a + b + c);
    }
    else
    {
        area = ((a + b) * c) / 2;
        printf("Area = %.1lf\n", area);
    }
    return 0;
}