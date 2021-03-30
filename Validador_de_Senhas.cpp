#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{

    string s;
    while (getline(cin, s))
    {
        bool val = true;
        bool minu = false;
        bool num = false;
        bool maiu = false;
        if (s.find(' ') != string::npos)
        {
            cout << "Senha invalida.\n";
            continue;
        }

        for (int i = 0; i <= s.length() - 1; i++)
        {
            if ((s[i] >= 65 && s[i] <= 90))
            {
                maiu = true;
                continue;
            }
            else if (s[i] >= 97 && s[i] <= 122)
            {
                minu = true;
                continue;
            }
            else if (s[i] >= 48 && s[i] <= 57)
            {
                num = true;
                continue;
            }
            else
            {
                val = false;
            }
        }

        int tam = s.length();

        if (val && minu && maiu && num && ((tam >= 6 && tam <= 32)))
        {
            cout << "Senha valida.\n";
        }
        else
        {
            cout << "Senha invalida.\n";
        }
        s.clear();
    }
    return 0;
}