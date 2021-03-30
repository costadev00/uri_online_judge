#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    vector<int> vet;
    int n, x = 0, best = 0, sum = 0;
    while (cin >> n)
    {

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            vet.push_back(x);
        }

        int i = 0, j = n - 1;
        long long somag = 0, somar = 0;

        while (i <= j)
        {

            if ((somar + vet[i]) <= (somag + vet[j]))
            {
                somar += vet[i];
                i++;
            }

            else
            {
                somag += vet[j];
                j--;
            }
        }

        if (somar >= somag)
            cout << somar - somag << endl;

        else
            cout << somag - somar << endl;
        vet.clear();
    }

    return 0;
}
