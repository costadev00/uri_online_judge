#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int busca_binaria(vi array, int x)
{
    int n = array.size();
    int a = 0, b = n - 1;
    while (a <= b)
    {
        int k = (a + b) / 2;
        if (array[k] == x)
        {
            return k;
            //returns the position of the element
        }

        if (array[k] > x)
        {
            b = k - 1;
        }
        else
        {
            a = k + 1;
        }
    }
    return -1;
}
//1,1,2,2,3,3,4,4,5,5
//            ^
int main()
{
    fastio;
    vi vet;
    int n, q, x, c, k, cases = 1;
    while (cin >> n >> q && n && q)
    {
        while (n--)
        {
            cin >> x;
            vet.pb(x);
        }
        sort(vet.begin(), vet.end());
        cout << "CASE# " << cases << ":\n";
        cases++;
        while (q--)
        {
            cin >> c;
            k = busca_binaria(vet, c);
            if (k != -1)
            {
                auto it = find(vet.begin(), vet.end(), c);
                cout << c << " found at " << (it - vet.begin()) + 1 << endl;
            }
            else
            {
                cout << c << " not found\n";
            }
        }
        vet.clear();
        k = 0;
        bool f = binary_search(vet.begin(), vet.end(), 4);
    }
    return 0;
}

//THE FASTER VERSION THAT I GOT

// int main()
// {
//     fastio;
//     vi vet;
//     int n, q, x, c, k, cases = 1;
//     while (cin >> n >> q && n && q)
//     {
//         while (n--)
//         {
//             cin >> x;
//             vet.pb(x);
//         }
//         sort(vet.begin(), vet.end());
//         cout << "CASE# " << cases << ":\n";
//         cases++;
//         while (q--)
//         {
//             cin >> c;
//             // k = bs(vet, c);
//             bool f = binary_search(vet.begin(), vet.end(), c);
//             if (f)
//             {
//                 auto it = lower_bound(vet.begin(), vet.end(), c);
//                 cout << c << " found at " << (it - vet.begin()) + 1 << endl;
//             }
//             else
//             {
//                 cout << c << " not found\n";
//             }
//         }
//         vet.clear();
//         k = 0;
//     }
//     return 0;
// }