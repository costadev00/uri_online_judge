#include <stdio.h>

int main()
{
    double c1, n1, v1;
    double c2, n2, v2;

    scanf("%lf %lf %lf", &c1, &n1, &v1);
    scanf("%lf %lf %lf", &c2, &n2, &v2);

    printf("VALOR A PAGAR: R$ %.2f\n", (n1 * v1) + (n2 * v2));

    return (0);
}