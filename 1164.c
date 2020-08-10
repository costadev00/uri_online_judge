/*

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, x, acm_perf=0;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        acm_perf=0;
        scanf("%d", &x);
        for (int j=1;j<x;j++) {
            if (x%j == 0) {
                acm_perf+=j;
            }
        }
        if (acm_perf == x) {
            printf("%d eh perfeito\n", x);
        }
        else {
            printf("%d nao eh perfeito\n", x);
        }
    }
    return 0;
}