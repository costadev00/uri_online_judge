#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{

    char palavra1[100], palavra2[100], palavra3[100];

    scanf("%s", palavra1);
    scanf("%s", palavra2);
    scanf("%s", palavra3);

    if (strcmp(palavra1, "vertebrado") == 0)
    {

        if (strcmp(palavra2, "ave") == 0)
        {

            if (strcmp(palavra3, "carnivoro") == 0)

                printf("aguia\n");

            else if (strcmp(palavra3, "onivoro") == 0)

                printf("pomba\n");
        }

        else if (strcmp(palavra2, "mamifero") == 0)
        {

            if (strcmp(palavra3, "onivoro") == 0)

                printf("homem\n");

            else if (strcmp(palavra3, "herbivoro") == 0)

                printf("vaca\n");
        }
    }

    else if (strcmp(palavra1, "invertebrado") == 0)
    {

        if (strcmp(palavra2, "inseto") == 0)
        {

            if (strcmp(palavra3, "herbivoro") == 0)

                printf("lagarta\n");

            else if (strcmp(palavra3, "hematofago") == 0)

                printf("pulga\n");
        }

        else if (strcmp(palavra2, "anelideo") == 0)
        {

            if (strcmp(palavra3, "onivoro") == 0)

                printf("minhoca\n");

            else if (strcmp(palavra3, "hematofago") == 0)

                printf("sanguessuga\n");
        }
    }

    return 0;
}