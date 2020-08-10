/*

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int qtd, i, number;
    scanf("%d", &qtd);

    do {
        scanf("%d", &number);
        int  j = 2, primo = 1;

        while (primo == 1 && j <= number/2) {
            if (number % j == 0) {
                primo = 0;
            }
            j++;
        }

        if (primo == 1) {
            printf("%d eh primo\n", number);
        }
        else {
            printf("%d nao eh primo\n", number);
        }
        i++;
    } while (i < qtd);
    return 0;
}

