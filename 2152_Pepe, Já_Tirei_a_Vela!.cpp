/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, m, o;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> h >> m >> o;
        if (o)
        {
            printf("%.2d:%.2d - A porta abriu!\n", h, m);
        }
        else
        {
            printf("%.2d:%.2d - A porta fechou!\n", h, m);
        }
    }
    return 0;
}