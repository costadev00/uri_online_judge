/*

*/
#include <stdio.h>
#include <stdlib.h>

int maior(int A, int B, int C);

int main()
{
    int m, a, b, c, res;
    scanf("%d", &m);
    scanf("%d", &a);
    scanf("%d", &b);
    c = m - (a + b);
    res = maior(a, b, c);
    printf("%d\n", res);
    return 0;
}

int maior(int A, int B, int C)
{
    if (A > B && A > C)
        return A;
    else if (B > A && B > C)
        return B;
    else if (C > A && C > B)
        return C;
}