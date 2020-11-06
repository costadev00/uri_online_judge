/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    do
    {
        cin >> n;
        if (n == 0)
        {
            exit(0);
        }
        int x[n * 2];
        for (int i = 0; i < n * 2; i++)
        {
            cin >> x[i];
        }
        sort(x, x + (n * 2));
        int vetsoma[n];
        int aux = (n * 2) - 1;

        for (int i = 0; i < n; i++)
        {
            vetsoma[i] = x[i] + x[aux];
            aux--;
        }
        sort(vetsoma, vetsoma + n);
        printf("%d %d\n", (vetsoma[n - 1]), (vetsoma[0]));
        // free(vetsoma);
    } while (n != 0);
    return 0;
}