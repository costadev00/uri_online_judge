/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int qtd, i = 1, j = 1, first, second, third;
    scanf("%d", &qtd);
    while (j <= qtd * 2)
    {
        if (j % 2 == 0)
        {
            first = i;
            second = first * first;
            third = first * second;
            printf("%d %d %d\n", first, second + 1, third + 1);
            i += 1;
        }
        else
        {
            first = i;
            second = first * first;
            third = first * second;
            printf("%d %d %d\n", first, second, third);
        }
        j += 1;
    }
    return 0;
}