#include <iostream>
using namespace std;
int main()
{
    int a[16], b, c, d, e, i;
    for (i = 0; i < 16; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            b = i + 1;
        }
        if (a[i] == 9)
        {
            c = i + 1;
        }
    }
    if (b > c)
    {
        d = c;
        e = b;
    }
    else
    {
        d = b;
        e = c;
    }
    if (d <= 8 && e >= 9)
    {
        cout << "final\n"
             << endl;
    }
    else if (d <= 4 && e >= 5 || d <= 12 && e >= 13)
    {
        cout << "semifinal\n"
             << endl;
    }
    else if (e == d + 1 && d % 2 == 1)
    {
        cout << "oitavas\n"
             << endl;
    }
    else
    {
        cout << "quartas\n"
             << endl;
    }
    return 0;
}