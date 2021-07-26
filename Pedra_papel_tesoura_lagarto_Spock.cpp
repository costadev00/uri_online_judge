#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) printf(args)
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    int t;
    string s, r;
    while (cin >> t)
    {
        cin.ignore();
        while (t--)
        {
            cin >> s >> r;
            if (s == r)
                cout << "empate\n";
            else if (s == "tesoura" && r == "papel")
                cout << "rajesh\n";
            else if (s == "papel" && r == "pedra")
                cout << "rajesh\n";
            else if (s == "pedra" && r == "lagarto")
                cout << "rajesh\n";
            else if (s == "lagarto" && r == "spock")
                cout << "rajesh\n";
            else if (s == "spock" && r == "tesoura")
                cout << "rajesh\n";
            else if (s == "tesoura" && r == "lagarto")
                cout << "rajesh\n";
            else if (s == "lagarto" && r == "papel")
                cout << "rajesh\n";
            else if (s == "papel" && r == "spock")
                cout << "rajesh\n";
            else if (s == "spock" && r == "pedra")
                cout << "rajesh\n";
            else if (s == "pedra" && r == "tesoura")
                cout << "rajesh\n";
            else
                cout << "sheldon\n";
        }
    }
    return 0;
}