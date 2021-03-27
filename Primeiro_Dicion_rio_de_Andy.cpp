#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{

    /* code */

    string s;
    char c;
    set<string> tokens; // Create vector to hold our words
    while (cin.get(c))
    {
        if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        {
            s += tolower(c);
        }
        else
        {
            tokens.insert(s);
            s.clear();
        }
    }

    if (!s.empty())
    {
        tokens.insert(s);
        s.clear();
    }
    // transform(s.begin(), s.end(), s.begin(), ::tolower);

    // string str(sr);
    // string buf;           // Have a buffer string
    // stringstream ss(str); // Insert the string into a stream

    // // getline(cin, str);
    // while (ss >> buf)
    // {
    //     tokens.insert(buf);
    // }
    // int aux = 0;
    // for (auto x : tokens)
    // {
    //     if (aux + 1 != tokens.size())
    //     {
    //         cout << x << endl;
    //     }
    //     else
    //     {
    //         cout << x;
    //     }
    //     aux++;
    // }
    for (set<string>::iterator i = tokens.begin(); i != tokens.end(); i++)
    {
        if (i == tokens.begin())
            i++;
        if (*i != "\n")
            cout << *i << endl;
    }
    tokens.clear();

    return 0;
}