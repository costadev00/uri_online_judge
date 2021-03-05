#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    string nome[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> nome[i];
    }
    cout << nome[2] << endl;
    cout << nome[6] << endl;
    cout << nome[8] << endl;
    return 0;
}