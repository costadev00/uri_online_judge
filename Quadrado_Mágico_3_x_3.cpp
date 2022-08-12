#include <iostream>

using namespace std;

int main()
{
    // Definindo as variáveis de guardar os valores da matriz e da soma das linhas e colunas
    int m[3][3], l[3] = {0, 0, 0}, c[3] = {0, 0, 0};

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            cin >> m[i][j];
            l[i] += m[i][j]; // Soma da linha correspondente
            c[j] += m[i][j]; // Soma da coluna correspondente
        }

    int d1 = m[0][0] + m[1][1] + m[2][2]; // Soma da diagonal principal
    int d2 = m[0][2] + m[1][1] + m[2][0]; // Soma da diagonal secundária

    // Se todos os valores são iguais entre sí, a matriz é um Quadrado Mágico
    if (d1 == d2 == l[0] == l[1] == l[2] == c[0] == c[1] == c[2])
        cout << "SIM";
    else
        cout << "NAO";
}
