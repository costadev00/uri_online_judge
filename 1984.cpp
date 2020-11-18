/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char exp[11];
    int i, j;
    char aux;
    cin >> exp;
    for (i = 0, j = strlen(exp) - 1; i < strlen(exp) / 2; i++, j--)
    {
        aux = exp[i];
        exp[i] = exp[j];
        exp[j] = aux;
    }
    printf("%s\n", exp);
    return 0;
}