/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int e, d, ver;
    cin >> e >> d;
    ver = e - d;
    if (ver < 0)
    {
        ver = 0 - ver;
    }

    if (e > d || d >= 24)
    {
        printf("Eu odeio a professora!\n");
    }
    else if (ver >= 3)
    {
        cout << "Muito bem! Apresenta antes do Natal!\n";
    }
    else
    {
        printf("Parece o trabalho do meu filho!\n");
        if (e + 2 < 24)
        {
            printf("TCC Apresentado!\n");
        }
        else
        {
            printf("Fail! Entao eh nataaaaal!\n");
        }
    }

    return 0;
}