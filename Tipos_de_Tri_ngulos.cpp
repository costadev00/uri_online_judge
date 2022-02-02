/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double a = 0, b = 0, c = 0, aux = 0;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    if (a <= b)
    {
        if (c > b)
        {
            aux = a;
            a = c;
            c = a;
        }
        else
        {
            aux = a;
            a = b;
            b = a;
        }
    }

    if (a >= (b + c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }

    else if ((a * a) == ((b * b) + (c * c)))
    {
        printf("TRIANGULO RETANGULO\n");
    }

    else if ((a * a) > (b * b + c * c))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }

    else if ((a * a) < (b * b) + (c * c))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && b == c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }

    else if (a == b || a == c || b == a || b == c)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}