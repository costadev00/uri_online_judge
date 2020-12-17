/*

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int x, cont=0, res=0, i=0;
    while (x!=0)
    {
        scanf("%d", &x);

        if (x==0) {
            exit(0);
        }

        for (i=x;cont<5;i++) {
            if (i%2==0) {
                cont++;
                res = res+i;
            }
        }
        printf("%d\n", res);
        cont=0;
        res=0;
    }

    return 0;
}