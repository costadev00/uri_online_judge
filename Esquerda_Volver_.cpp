#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, pos = 0;
    char res[] = "NLSO";
    do
    {

        pos = 1;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        char c[n + 1];
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (c[i] == 'D')
            {
                pos++;
                if (pos > 4)
                {
                    pos = 1;
                }
            }
            else
            {
                pos--;
                if (pos == 0)
                {
                    pos = 4;
                }
            }
        }
        if (abs(pos) == 1)
        {
            printf("N\n");
        }
        else if (abs(pos) == 2)
        {
            printf("L\n");
        }
        else if (abs(pos) == 3)
        {
            printf("S\n");
        }
        else if (abs(pos) == 4)
        {
            printf("O\n");
        }
    } while (n != 0);
    return 0;
}