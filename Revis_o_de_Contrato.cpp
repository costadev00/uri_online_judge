//TODO: SOLVE
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    char n;
    string exp;
    do
    {
        cin >> n;
        cin >> exp;
        for (int i = 0; i < exp.size(); i++)
        {
            if (exp[i] == n)
            {
                exp[i] = NULL;
            }
        }
    } while (n == 0 && exp[0] == 0);
    return 0;
}