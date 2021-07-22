/*

*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int par[5], impar[5];
    int x, cont_par = 0, cont_impar = 0;
    for (int i = 0; i < 15; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            par[cont_par] = x;
            cont_par++;
            if (cont_par == 5)
            {
                for (int j = 0; j < cont_par; j++)
                {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                cont_par = 0;
            }
        }
        else
        {
            impar[cont_impar] = x;
            cont_impar++;
            if (cont_impar == 5)
            {
                for (int j = 0; j < cont_impar; j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                cont_impar = 0;
            }
        }
    }
    for (int i = 0; i < cont_impar; i++)
    {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for (int i = 0; i < cont_par; i++)
    {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}

// /*

// */
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int n, vet1[5], vet2[5], aux = 0, aux_par = 0, aux_impar = 0;
//     for (int i = 0; i < 15; i++)
//     {
//         scanf("%d", &n);

//         if (n % 2 == 0)
//         {
//             vet1[aux_par] = n;
//             ++aux_par;
//         }
//         else
//         {
//             vet2[aux_impar] = n;
//             ++aux_impar;
//         }

//         if (aux_par == 5)
//         {
//             for (int j = 0; j < 5; j++)
//             {
//                 printf("par[%d] = %d\n", j, vet1[j]);
//             }
//             aux_par = 0;
//         }

//         if (aux_impar == 5)
//         {
//             for (int j = 0; j < 5; j++)
//             {

//                 printf("impar[%d] = %d\n", j, vet2[j]);
//             }
//             aux_impar = 0;
//         }
//         // aux++;
//     }
//     for (int i = 0; i < aux_impar; i++)
//     {
//         printf("impar[%d] = %d\n", i, vet2[i]);
//     }
//     for (int i = 0; i < aux_par; i++)
//     {
//         printf("par[%d] = %d\n", i, vet1[i]);
//     }
//     return 0;
// }