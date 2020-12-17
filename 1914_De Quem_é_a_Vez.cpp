/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, n1, n2, soma = 0;
    string nome1, nome2;
    string exp1, exp2;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nome1 >> exp1 >> nome2 >> exp2;
        cin >> n1 >> n2;
        soma = n1 + n2;

        if (exp1 == "PAR" && (soma % 2) == 0)
        {
            cout << nome1 << endl;
        }
        else if (exp1 == "IMPAR" && (soma % 2) != 0)
        {
            cout << nome1 << endl;
        }
        else if (exp2 == "PAR" && (soma % 2) == 0)
        {
            cout << nome2 << endl;
        }
        else if (exp2 == "IMPAR" && (soma % 2) != 0)
        {
            cout << nome2 << endl;
        }
    }
    return 0;
}