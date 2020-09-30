/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char hash[50];
    fgets(hash, 50, stdin);
    for (int i = 0; hash[i] != '\0'; i++)
    {
        printf("%c\n", hash[i]);
        printf("%d\n", hash[i] - 65);
    }
    return 0;
}