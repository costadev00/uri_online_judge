/*

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    float s=1, i, j=3, k=2;
    for (i=1;j<=39;i++) {
        s += j/k;
        j+=2;
        k*=2;
    }
    printf("%.2f\n", s);
    return 0;
}