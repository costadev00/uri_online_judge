/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n[4], res = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> n[i];
        if (n[i] == 1)
        {
            res = i;
        }
    }
    printf("%d\n", res + 1);
    return 0;
}