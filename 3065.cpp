/*
code by: Hellen Ayumi
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, d, f, e = 1, i;
    char c;
    cin >> a;
    while (a != 0)
    {
        f = 0;
        d = 1;
        for (i = 0; i < a; i++)
        {
            if (i > 0)
            {
                cin >> c;
                if (c == '+')
                {
                    d = 1;
                }
                else
                {
                    d = 0;
                }
            }
            cin >> b;
            if (d == 1)
            {
                f = f + b;
            }
            else
            {
                f = f - b;
            }
        }

        cout << "Teste " << e << endl;
        cout << f << endl
             << endl;
        e++;
        cin >> a;
    }

    return 0;
}