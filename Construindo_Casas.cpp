#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a, b, c;
    double res;
    do
    {
        cin >> a >> b >> c;
        if (a == 0)
        {
            break;
        }
        cout << (int)sqrt((a * b) * (100.0 / c)) << endl;
    } while (a != 0);

    return 0;
}