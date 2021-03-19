#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int cont, venc = 0;
    string s1, s2, s3;
    while (cin >> s1 >> s2 >> s3)
    {
        cont = 0;
        if (s1 == s2 && s2 == s3)
        {
            cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
            continue;
        }
        else if (s1 != s2 && s1 != s3 && s2 != s3)
        {
            cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
            continue;
        }

        if (s2 == s3 && s1 != s2)
        {
            if (s2 == "papel" && s1 == "pedra")
            {
                cont++;
            }
            else if (s2 == "tesoura" && s1 == "papel")
            {
                cont++;
            }
            else if (s2 == "pedra" && s1 == "tesoura")
            {
                cont++;
            }
            venc = 1;
            cont++;
            // cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
        }
        if (s1 == s3 && s2 != s1)
        {
            if (s1 == "papel" && s2 == "pedra")
            {
                cont++;
            }
            else if (s1 == "tesoura" && s2 == "papel")
            {
                cont++;
            }
            else if (s1 == "pedra" && s2 == "tesoura")
            {
                cont++;
            }
            venc = 2;
            cont++;
            // cout << "Iron Maiden's gonna get you, no matter how far!\n";
        }

        if (s1 == s2 && s3 != s2)
        {

            if (s2 == "papel" && s3 == "pedra")
            {
                cont++;
            }
            else if (s2 == "tesoura" && s3 == "papel")
            {
                cont++;
            }
            else if (s2 == "pedra" && s3 == "tesoura")
            {
                cont++;
            }
            venc = 3;
            cont++;
            // cout << "Urano perdeu algo muito precioso...\n";
        }

        if (cont > 1)
        {
            cout << "Putz vei, o Leo ta demorando muito pra jogar...\n";
        }
        else
        {
            if (venc == 1)
            {
                cout << "Os atributos dos monstros vao ser inteligencia, sabedoria...\n";
            }
            else if (venc == 2)
            {
                cout << "Iron Maiden's gonna get you, no matter how far!\n";
            }
            else if (venc == 3)
            {
                cout << "Urano perdeu algo muito precioso...\n";
            }
        }
    }
    return 0;
}