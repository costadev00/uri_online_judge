/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int t, flag = 1;
    float tempo = 1, melhor = 1;
    while (scanf("%d", &t) != EOF)
    {
        // cin >> t;
        for (int i = 0; i < t; i++)
        {
            cin >> tempo;
            if (flag == 1)
            {
                melhor = tempo;
                flag++;
            }

            if (melhor > tempo)
            {
                melhor = tempo;
            }
        }
        printf("%.2f\n", melhor);
        flag = 1;
    }
    return 0;
}