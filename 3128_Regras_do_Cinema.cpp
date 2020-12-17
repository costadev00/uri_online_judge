/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i1, i2;
    cin >> i1 >> i2;
    if (i1 < 6 || i2 < 6)
    {
        printf("NO\n");
        exit(0);
    }
    if (i1 >= 18 || i2 >= 18)
    {
        printf("YES\n");
    }
    else if (i1 >= 14 && i2 >= 14)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}