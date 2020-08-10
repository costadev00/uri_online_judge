/*

*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, x=0, y=0, j=0, cont_y=0, res=0;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d %d", &x, &y);
        j=x;
        cont_y=0;
        res=0;
        while (cont_y!=y) {
            if (j%2!=0) {
                res+=j;
                cont_y++;
            }
            j+=1;
        }
        printf("%d\n", res);
    }

    return 0;
}