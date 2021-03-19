//TODO: SOLVE
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if ((a < c + d) && (c < a + d) && (d < a + b))
        cout << "S" << endl;
    else if ((a < b + d) && (b < a + d) && (d < a + c))
        cout << "S" << endl;
    else if ((a < b + c) && (b < a + c) && (c < a + b))
        cout << "S" << endl;
    else if ((b < d + c) && (d < b + c) && (c < d + b))
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}