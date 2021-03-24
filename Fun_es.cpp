#include "bits/stdc++.h"
// #include "C:\MinGW\lib\gcc\mingw32\9.2.0\include\c++\mingw32\bits\stdc++.h"

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

// A função que Rafael escolheu é r(x, y) = (3x)² + y².

// Já Beto escolheu a função b(x, y) = 2(x²) + (5y)².

// Carlos, por sua vez, escolheu a função c(x, y) = -100x + y³.

// float rafael(float x, float y)
// {
//     float val;
//     val = pow((3 * x), 2) + pow(y, 3);
//     return val;
// }
// float beto(float x, float y)
// {
//     float val;
//     val = 2 * (x * x) + ((5 * y) * (5 * y));
//     return val;
// }
// float carlos(float x, float y)
// {
//     float val;
//     val = -100 * x + pow(y, 3);
//     return val;
// }

int main()
{
    float n, x, y, res, r, b, c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        r = ((pow(3 * x, 2)) + (pow(y, 2)));
        b = (2 * (pow(x, 2)) + (pow(5 * y, 2)));
        c = (-100 * x + (pow(y, 3)));
        res = max(r, b);
        res = max(res, c);
        // cout << "r = " << (int)r << endl;
        // cout << "b = " << (int)b << endl;
        // cout << "c = " << (int)c << endl;
        // cout << "res = " << res << endl;

        if (res == r)
        {
            cout << "Rafael ganhou\n";
        }
        else if (res == b)
        {
            cout << "Beto ganhou\n";
        }
        else
        {
            cout << "Carlos ganhou\n";
        }
    }
    return 0;
}