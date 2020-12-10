#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int l;
    while (cin >> l)
    {
        int vet_l[l];
        for (int i = 0; i < l; i++)
        {
            cin >> vet_l[i];
        }
        sort(vet_l, vet_l + l);
        if (vet_l[l - 1] < 10)
        {
            printf("1\n");
        }
        else if (vet_l[l - 1] >= 10 && vet_l[l - 1] < 20)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }
    return 0;
}