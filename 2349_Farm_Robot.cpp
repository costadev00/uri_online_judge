/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, c, s, x, contres = 0, local = 1;
    scanf("%d %d %d\n", &n, &c, &s);
    if (local == s)
    {
        contres++;
    }
    for (int i = 0; i < c; i++)
    {
        cin >> x;
        local += x;
        // if (x == 1)
        // {
        //     local++;
        // }
        // if (x == -1)
        // {
        //     local--;
        // }
        if (local > n)
        {
            local = 1;
        }
        else if (local < 1)
        {
            local = n;
        }
        if (local == s)
        {
            contres++;
        }
    }
    cout << contres << endl;
    return 0;
}