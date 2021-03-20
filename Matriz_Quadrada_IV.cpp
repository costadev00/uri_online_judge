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

        int m[n][n];
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {

                if (i == j)
                    m[i][j] = 2;
                else if (i == n - j - 1)
                    m[i][j] = 3;
                else
                    m[i][j] = 0;
            }
        int inicio = n / 3;
        int fim = n - inicio;
        for (int i = inicio; i < fim; i++)
            for (int j = inicio; j < fim; j++)
                m[i][j] = 1;
        m[n / 2][n / 2] = 4;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << m[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}