/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, tot;
    string acao;
    cin >> n >> m;
    tot = n;
    for (int i = 0; i < m; i++)
    {
        cin >> acao;
        if (acao == "fechou")
        {
            tot++;
        }
        else
        {
            tot--;
        }
    }
    printf("%d\n", tot);
    return 0;
}