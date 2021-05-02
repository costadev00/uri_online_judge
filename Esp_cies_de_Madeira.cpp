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
    int t, I = 1;
    scanf("%d", &t);
    cin.ignore();
    cin.ignore();
    string str;
    while (t--)
    {
        int n = 0;
        if (I != 1)
            cout << endl;
        map<string, int> a;
        map<string, int>::iterator i;
        while (getline(cin, str))
        {
            if (str.size() == 0)
                break;
            a[str]++;
            n++;
        }
        for (i = a.begin(); i != a.end(); i++)
        {
            string s = i->first;
            int x = i->second;
            double per = x * 100.0 / (double)n;
            printf("%s %.4lf\n", s.c_str(), per);
        }
        I++;
    }
    return 0;
}