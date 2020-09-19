/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    char curso[101];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        fgets(curso, 101, stdin);
        getchar();
    }
    printf("Ciencia da Computacao\n");
    return 0;
}