/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, conta = 0, conte = 0, conth = 0, contm = 0, contx = 0;
    char nome[100], raca;
    cin >> n;
    // getchar();
    for (int i = 0; i < n; i++)
    {
        cin >> nome >> raca;
        switch (raca)
        {
        case 'A':
            conta++;
            break;
        case 'E':
            conte++;
            break;
        case 'H':
            conth++;
            break;
        case 'M':
            contm++;
            break;
        case 'X':
            contx++;
            break;
        }
    }
    printf("%d Hobbit(s)\n", contx);
    printf("%d Humano(s)\n", conth);
    printf("%d Elfo(s)\n", conte);
    printf("%d Anao(s)\n", conta);
    printf("%d Mago(s)\n", contm);

    return 0;
}