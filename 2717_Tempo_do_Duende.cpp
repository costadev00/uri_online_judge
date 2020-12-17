/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p1, p2;
    cin >> n;
    cin >> p1 >> p2;
    if ((p1 + p2) <= n)
    {
        printf("Farei hoje!\n");
    }
    else
    {
        printf("Deixa para amanha!\n");
    }
    return 0;
}