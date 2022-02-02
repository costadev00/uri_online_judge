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
    double p1, p2;
    int c;
    double x;
    while (cin >> p1 >> c >> p2)
    {
        double acm = p1;
        while (c--)
        {
            cin >> x;
            acm += x;
        }
        if (acm <= p2)
        {
            printf("%.2lf\n",acm);
            cout << "ho ho ho\n";
        }
        else
        {
            printf("%.2lf\n",acm);
            cout <<"papai noel precisa fazer exercicios\n";
        }
    }
    return 0;
}