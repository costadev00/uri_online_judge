#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int x, i = 0;
    char s[1000];
    cin >> x;
    do
    {
        if (x <= 1000 && x > 500)
        {
            s[i] = 'M';
            i++;
            x -= 1000;
        }
        else if (x <= 500 && x > 100)
        {
            s[i] = 'D';
            i++;
            x -= 500;
        }
        else if (x <= 100 && x > 50)
        {
            s[i] = 'C';
            i++;
            x -= 100;
        }
        else if (x <= 50 && x > 10)
        {
            s[i] = 'L';
            i++;
            x -= 50;
        }
        else if (x <= 10 && x > 5)
        {
            s[i] = 'X';
            i++;
            x -= 10;
        }
        else if (x <= 5 && x > 1)
        {
            s[i] = 'V';
            i++;
            x -= 5;
        }
        else
        {
            s[i] = 'I';
            i++;
            x -= 1;
        }
    } while (x > 0);
    printf("%s\n", s);
    return 0;
}