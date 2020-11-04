/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n = 1, vet_trem[1000] = {0}, vet_desem[1000] = {0};
    while (cin >> n)
    {
        for (int i = n; i > 0; i--)
        {
            vet_trem[i] = i;
        }
    }
    return 0;
}