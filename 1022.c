#include <stdio.h>
#include <stdlib.h>
#include <math.h>
////////////////
int mdc(int n1, int n2);
////////////////
int main()
{
    int n1, d1, n2, d2, num, den, simplifica;
    int casos;
    char oper;
    scanf("%d", &casos);

    do
    {
        scanf("%d / %d %c %d / %d", &n1, &d1, &oper, &n2, &d2);

        if (oper == '+')
        {
            num = (n1 * d2 + n2 * d1);
            den = (d1 * d2);
        }

        else if (oper == '-')
        {
            num = (n1 * d2 - n2 * d1);
            den = (d1 * d2);
        }

        else if (oper == '*')
        {
            num = (n1 * n2);
            den = (d1 * d2);
        }

        else if (oper == '/')
        {
            num = (n1 * d2);
            den = (n2 * d1);
        }

        simplifica = mdc(num, den);

        printf("%d/%d = %d/%d\n", num, den, num / simplifica, den / simplifica);

        casos--;
    } while (casos > 0);
    return 0;
}
int mdc(int a, int b)
{
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    if (a % b == 0)
        return b;
    else
        return mdc(b, a % b);
}