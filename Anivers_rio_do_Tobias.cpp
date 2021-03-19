//implementation by Guilherme Gabriel
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

long long fat(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fat(n - 1);
}

int main()
{
    long long q = 0, qtb = 0, d = 1, n;
    string cor;
    map<string, int> mbaloes;
    cin >> n;
    while (n--)
    {
        cin >> cor >> q;
        qtb += q;
        mbaloes[cor] += q;
    }

    for (auto b : mbaloes)
    {
        if (b.second >= 2)
            d *= fat(b.second);
    }

    cout << "Feliz aniversario Tobias!\n";
    cout << fat(qtb) / d << "\n";

    return 0;
}