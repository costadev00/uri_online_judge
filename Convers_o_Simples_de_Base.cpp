#include <bits/stdc++.h>

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

int main()
{
    string s;
    int n;
    while (cin >> s)
    {
        if (s == "-1")
            break;

        if (s[1] == 'x')
        {
            stringstream ss;
            ss << hex << s;
            ss >> n;
            cout << n << endl;
        }
        else
        {
            stringstream number(s);
            number >> n;
            cout << "0x";
            printf("%X\n", n);
        }
    }
    return 0;
}