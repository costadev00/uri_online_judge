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

int main()
{
    fastio;
    int n;
    map<string, char> vet;
    vet["."] = 'a';
    vet[".."] = 'b';
    vet["..."] = 'c';
    vet[". ."] = 'd';
    vet[".. .."] = 'e';
    vet["... ..."] = 'f';
    vet[". . ."] = 'g';
    vet[".. .. .."] = 'h';
    vet["... ... ..."] = 'i';
    vet[". . . ."] = 'j';
    vet[".. .. .. .."] = 'k';
    vet["... ... ... ..."] = 'l';
    vet[". . . . ."] = 'm';
    vet[".. .. .. .. .."] = 'n';
    vet["... ... ... ... ..."] = 'o';
    vet[". . . . . ."] = 'p';
    vet[".. .. .. .. .. .."] = 'q';
    vet["... ... ... ... ... ..."] = 'r';
    vet[". . . . . . ."] = 's';
    vet[".. .. .. .. .. .. .."] = 't';
    vet["... ... ... ... ... ... ..."] = 'u';
    vet[". . . . . . . ."] = 'v';
    vet[".. .. .. .. .. .. .. .."] = 'w';
    vet["... ... ... ... ... ... ... ..."] = 'x';
    vet[". . . . . . . . ."] = 'y';
    vet[".. .. .. .. .. .. .. .. .."] = 'z';
    while (cin >> n)
    {
        cin.ignore();
        while (n--)
        {
            string s;
            read(s);
            cout << vet[s] << endl;
        }
    }
    return 0;
}