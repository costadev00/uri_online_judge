/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    float res;
    char pal[10001];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> pal;
        res = strlen(pal);
        printf("%.2f\n", res / 100);
    }
    return 0;
}