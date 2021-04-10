// TODO : SOLVE
//tem de ser feito em O(1)

#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define FOR(i, a, b) for (int i = a; i < b; i++)

// TLE

// int main()
// {
//     fastio;
//     unsigned long long int n, g;
//     cin >> n;
//     while (n--)
//     {
//         unsigned long long int sold = 0, lin = 0;
//         cin >> g;
//         unsigned long long int aux = g;
//         for (int i = 1; i <= g; i++)
//         {

//             if (sold >= g)
//             {
//                 break;
//             }
//             sold += i;
//             aux -= i;
//             lin++;
//             if (aux < i + 1)
//             {
//                 break;
//             }
//         }
//         cout << lin << endl;
//     }
//     return 0;
// }

//this works
int main()
{
    llu n, g;
    cin >> n;
    while (n--)
    {
        cin >> g;
        cout << (llu)(-1 + sqrt(1 + 8 * g)) / 2 << endl;
    }
}