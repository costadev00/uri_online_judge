#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string st;
    bool f = true;
    while (getline(cin, st))
    {

        for (int i = 0; i < st.length(); i++)
        {
            if (st[i] == '"')
            {
                if (f)
                {
                    printf("``");
                    f = false;
                    continue;
                }
                else
                {
                    printf("''");
                    f = true;
                    continue;
                }
                printf("%c", st[i]);
                continue;
            }
            printf("%c", st[i]);
        }
        printf("\n");
    }
    return 0;
}