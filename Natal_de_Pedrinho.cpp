#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, d;
    while (scanf("%d %d", &m, &d) != EOF)
    {
        if (m == 12)
        {
            if (d < 24)
                printf("Faltam %d dias!\n", 25 - d);
            else
            {
                if (d == 24)
                    printf("E vespera de natal!\n");
                else
                {
                    if (d > 25)
                        printf("Ja passou!\n");
                    else
                        printf("E natal!\n");
                }
            }
        }
        if (m == 11)
            printf("Faltam %d dias para o natal!\n", 25 + 30 - d);
        if (m == 10)
            printf("Faltam %d dias para o natal!\n", 31 + 25 + 30 - d);
        if (m == 9)
            printf("Faltam %d dias para o natal!\n", 30 + 31 + 25 + 30 - d);
        if (m == 8)
            printf("Faltam %d dias para o natal!\n", 31 + 30 + 31 + 25 + 30 - d);
        if (m == 7)
            printf("Faltam %d dias para o natal!\n", 31 + 31 + 30 + 31 + 25 + 30 - d);
        if (m == 6)
            printf("Faltam %d dias para o natal!\n", 30 + 31 + 31 + 30 + 31 + 25 + 30 - d);
        if (m == 5)
            printf("Faltam %d dias para o natal!\n", 31 + 30 + 31 + 31 + 30 + 31 + 25 + 30 - d);
        if (m == 4)
            printf("Faltam %d dias para o natal!\n", 30 + 31 + 30 + 31 + 31 + 30 + 31 + 25 + 30 - d);
        if (m == 3)
            printf("Faltam %d dias para o natal!\n", 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 25 + 30 - d);
        if (m == 2)
            printf("Faltam %d dias para o natal!\n", 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 25 + 30 - d);
        if (m == 1)
            printf("Faltam %d dias para o natal!\n", 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 25 + 30 - d);
    }
    return 0;
}