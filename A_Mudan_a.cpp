#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    while (cin >> n)
    {

        if (n >= 270 && n < 360)
        {
            cout << "De Madrugada!!\n";
        }
        else if (n == 360 || (n >= 0 && n < 90))
        {
            cout << "Bom Dia!!\n";
        }
        else if (n >= 90 && n < 180)
        {
            cout << "Boa Tarde!!\n";
        }
        else
        {
            cout << "Boa Noite!!\n";
        }
    }
    return 0;
}