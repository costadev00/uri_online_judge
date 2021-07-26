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
    int c;
    string s1, s2, s3;
    while (cin >> c)
    {
        cin.ignore();
        while (c--)
        {
            cin >> s1;
            cin >> s2;
            cin >> s3;
            bool p1 = true, p2 = true;
            int l1, l2;
            for (int i = 0; i < s3.length(); i++)
            {

                if (isalpha(s3[i]) == 0 && p1)
                {
                    l1 = i;
                    p1 = false;
                }
                else if (isalpha(s3[i]) == 0 && p2)
                {
                    l2 = i;
                    p2 = false;
                }
            }
            // cout << l1 << " " << l2 << endl;
            if (s1[l1] == s2[l2] || s1[l2] == s2[l1])
                cout << "Y\n";
            else
                cout << "N\n";
        }
    }
    return 0;
}