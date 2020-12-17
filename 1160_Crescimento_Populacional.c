/*

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int t, pa, pb, i=0, res=0;
    double ga, gb;
    scanf("%d", &t);

    for (i=0;i<t;i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);

        while (pa<=pb && res<101) {
            pa += (int)((pa * ga)/100);
            pb += (int)((pb * gb)/100);
            res++;
        }
        if (res>100) {
            printf("Mais de 1 seculo.\n");
            // printf("%d anooos.\n", res);
            // printf("pa = %.0lf\n", pa);
            // printf("pb = %.0lf\n", pb);8
            // break;
        }
        else {
            printf("%d anos.\n", res);
        }
        res=0;
    }
    return 0;
}