/* 
By: Hellen Ayumi
*/
/*

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, c, d = 0, e = -1, f, i;
    cin >> a;
    while (a != 0)
    {
        d = 0;
        e = -1;
        int b[a];
        for (i = 0; i < a; i++)
        {
            cin >> b[i];
        }

        for (i = 0; i < a; i++)
        {
            if (i < a - 1)
            {
                if (b[i] < b[i + 1])
                {
                    c = 1;
                }
                else if (b[i] > b[i + 1])
                {
                    c = 0;
                }
                if (i == 0)
                {
                    f = c;
                }
                if (e != c)
                {
                    e = c;
                    d++;
                }
            }
            else
            {
                if (b[i] < b[0])
                {
                    c = 1;
                }
                else if (b[i] > b[0])
                {
                    c = 0;
                }
                if (c != f && e != c)
                {
                    d++;
                }
            }
        }
        cout << d << endl;
        cin >> a;
    }
    return 0;
}