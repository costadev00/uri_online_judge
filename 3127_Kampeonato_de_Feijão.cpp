/*

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    if (a > 99999)
    {
        a = a - 99999;
        b = a * 6;
        b = b + 488889;
    }
    else if (a > 9999)
    {
        a = a - 9999;
        b = a * 5;
        b = b + 38889;
    }
    else if (a > 999)
    {
        a = a - 999;
        b = a * 4;
        b = b + 2889;
    }
    else if (a > 99)
    {
        a = a - 99;
        b = a * 3;
        b = b + 189;
    }
    else if (a > 9)
    {
        a = a - 9;
        b = a * 2;
        b = b + 9;
    }
    else
    {
        b = a;
    }
    cout << b << endl;

    return 0;
}