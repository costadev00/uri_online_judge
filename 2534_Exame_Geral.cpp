/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hab, col, k;
    while (cin >> hab >> col)
    {
        int notas[hab];
        for (int i = 0; i < hab; i++)
        {
            cin >> notas[i];
        }
        sort(notas, notas + hab, greater<int>());
        for (int i = 0; i < col; i++)
        {
            cin >> k;
            printf("%d\n", notas[k - 1]);
        }
    }
    return 0;
}