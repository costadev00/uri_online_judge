#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y, menor, maior, res = 0;
    scanf("%d", &x);
    scanf("%d", &y);
    if (x < y)
    {
        menor = x;
        maior = y;
    }
    else
    {
        menor = y;
        maior = x;
    }

    for (int i = menor + 1; i < maior; i++)
    {
        if (i % 2 != 0)
        {
            res += i;
        }
    }
    printf("%d\n", res);
    return 0;
}