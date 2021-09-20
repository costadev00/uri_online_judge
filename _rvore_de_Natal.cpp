#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int x = 0;

int asterisco(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ' ';
    }
    for (int i = 0; i <= x; i++)
    {
        printf("* ");
    }
    printf("\n");
    x++;
    return (asterisco(n - 1));
}

int main()
{
    int n;
    while (cin >> n)
    {
        x = 1;
        // asterisco(n);
        while (x < n)
        {
            for (int i = 0; i < n - x; i++)
            {
                cout << ' ';
            }
            for (int i = 0; i < x; i++)
            {
                cout << "*";
            }
            x += 2;
            cout << endl;
        }
        for (int i = 0; i < n; i++)
        {
            cout << "*";
        }
        cout << endl;

        cout << "\t*" << endl;
        cout << "\t***" << endl;
    }
    return 0;
}