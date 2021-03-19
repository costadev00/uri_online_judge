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
        double vel_media = 0, maior = 0;
        int dia = 1;
        double t, v, aux = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> t >> v;
            vel_media = v / t;
            maior = max(maior, vel_media);
            if (dia == 1)
            {
                cout << dia << "\n";
                aux = maior;
            }
            if (maior > aux)
            {
                cout << dia << "\n";
                aux = maior;
            }

            dia++;
            aux = maior;
        }
    }
    return 0;
}