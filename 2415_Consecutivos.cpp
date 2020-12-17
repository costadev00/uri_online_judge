/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, contp = 1, conttot = 1;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (i = 1; i < n; i++)
        {
            if (v[i] == v[i - 1])
            {
                contp++;
            }
            else
            {
                if (conttot < contp)
                    conttot = contp;
                contp = 1;
            }
        }

        if (conttot < contp)
        {
            conttot = contp;
        }

        printf("%d\n", conttot);

        // if (i == n - 1)
        // {
        //     break;
        // }
        // if (v[i] == v[i + 1])
        // {
        //     cont++;
        // }
        // else
        // {
        //     // cont = 0;
        // }
    }
    return 0;
}