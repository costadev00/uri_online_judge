#include<stdio.h>
#include<stdlib.h>

int main() {

    int n;
    float n1, n2, n3, media = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f %f %f", &n1, &n2, &n3);
        n1 *= 2;
        n2 *= 3;
        n3 *= 5;
        media = (n1 + n2 + n3) / 10;
        printf("%.1f\n", media);
    }
    return 0;
}