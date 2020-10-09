/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t, n, k, gar;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        gar = 0;
        cin >> n;
        cin >> k;
        while (n >= k)
        {
            n -= k;
            gar++;
        }
        cout << n + gar << endl;
    }
    return 0;
}