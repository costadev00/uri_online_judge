//PS WRONGS
//como converter um char para inteiro
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int toint(string x)
{
    istringstream ss(x);
    int a;
    ss >> a;
    return a;
}

int main()
{
    fastio;
    int n, soma = 0;
    cin >> n;
    string a, cada;
    for (int i = 0; i < n; i++)
    {

        cin >> a;
        if (a != "P=NP")
        {
            soma = 0;
            cada = "";
            for (int j = 0; j <= a.length(); j++)
            {
                if (a.substr(j, 1) == "+" || j == a.length())
                {
                    soma += toint(cada);
                    cada = "";
                }
                else
                {
                    cada = cada + a.substr(j, 1);
                }
            }
            //tentei fazer isso, nos casos de teste exemplo funcionam, porém não passa...
            // char a = '4';
            // int ia = a[0] - '0';
            // int ia2 = a[2] - '0';
            cout << soma << endl;
        }
        else
        {
            cout << "skipped\n";
        }
    }
    return 0;
}