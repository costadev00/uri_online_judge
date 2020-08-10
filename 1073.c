/*

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, x = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (x % 2 == 0)
        {
            printf("%d^2 = %d\n", x, x * x);
        }
        x++;
    }
    return 0;
}