/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, q, p;
    float res = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p >> q;
        switch (p)
        {
        case 1001:
            res += 1.50 * q;
            break;
        case 1002:
            res += 2.50 * q;
            break;
        case 1003:
            res += 3.50 * q;
            break;
        case 1004:
            res += 4.50 * q;
            break;
        case 1005:
            res += 5.50 * q;
            break;
        default:
            break;
        }
    }
    printf("%.2f\n", res);
    return 0;
}