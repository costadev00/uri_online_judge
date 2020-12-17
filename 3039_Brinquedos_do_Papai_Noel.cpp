/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, acm_boy = 0, acm_girl = 0;
    string nome;
    char sexo;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> nome;
        getchar();
        cin.get(sexo);

        if (sexo == 'M')
        {
            acm_boy++;
        }
        else
        {
            acm_girl++;
        }
    }
    printf("%d carrinhos\n", acm_boy);
    printf("%d bonecas\n", acm_girl);
    return 0;
}