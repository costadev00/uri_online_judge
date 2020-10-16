/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int c, n1, n2, res, total, resposta;
    char c1, igual;
    cin >> c;
    for (int i = 0; i < c; i++)
    {
        cin >> n1;
        cin >> c1;
        cin >> n2;
        if (c1 == '+')
        {
            total = n1 + n2;
        }
        else if (c1 == '-')
        {
            total = n1 - n2;
        }
        else
        {
            total = n1 * n2;
        }
        cin >> igual;
        cin >> res;
        printf("E");
        resposta = abs(total - res);
        // abs(resposta);
        for (int j = 0; j < resposta; j++)
        {
            printf("r");
        }
        printf("ou!\n");
    }
    return 0;
}