#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n;
    vector<int> vect;
    cin >> n;
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
        vect.push_back(vet[i]);
    }
    sort(vet, vet + n);
    for (int i = 0; i < n; i++)
    {
        if (vet[i] == vet[i + 1])
        {
            continue;
        }
        printf("%d aparece %d vez(es)\n", vet[i], count(vect.begin(), vect.end(), vet[i]));
    }
    return 0;
}