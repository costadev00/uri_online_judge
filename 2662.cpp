/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    string cons[] = {"do", "do#", "re", "re#", "mi", "fa", "fa#", "sol", "sol#", "la", "la#", "si"};
    int n, nm, nuns[] = {0, 2, 4, 5, 7, 9, 11, 12};

    cin >> n;
    vector<int> notasm(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        notasm[i] = (x - 1) % 12;
    }

    int verdade = 0;
    for (int i = 0; i < 12; i++)
    {
        vector<int> validar(12, 0);
        for (int j = 0; j < 7; j++)
        {
            validar[(i + nuns[j]) % 12] = true;
        }
        int ok = true;
        for (int j = 0; j < notasm.size(); j++)
        {
            ok &= validar[notasm[j]];
        }
        if (ok)
        {
            cout << cons[i] << endl;
            verdade = true;
            break;
        }
    }
    if (!verdade)
    {
        cout << "desafinado" << endl;
    }
    return 0;
}
