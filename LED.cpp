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

int main()
{
    fastio;
    int n;
    string exp;
    cin >> n;
    while (n--)
    {
        int cont = 0;
        cin >> exp;
        for (int i = 0; i < exp.size(); i++)
        {
            if (exp[i] == '1')
            {
                cont += 2;
            }
            else if (exp[i] == '2')
            {
                cont += 5;
            }
            else if (exp[i] == '3')
            {
                cont += 5;
            }
            else if (exp[i] == '4')
            {
                cont += 4;
            }
            else if (exp[i] == '5')
            {
                cont += 5;
            }
            else if (exp[i] == '6')
            {
                cont += 6;
            }
            else if (exp[i] == '7')
            {
                cont += 3;
            }
            else if (exp[i] == '8')
            {
                cont += 7;
            }
            else if (exp[i] == '9')
            {
                cont += 6;
            }
            else if (exp[i] == '0')
            {
                cont += 6;
            }
        }
        cout << cont << " leds" << endl;
    }
    return 0;
}