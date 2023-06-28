#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) 
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
    cin >> n;
    int mat[n][n];
    bool flag = true;
    int num = 0;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            sum += mat[i][j];
            s.insert(mat[i][j]);
        }
        if (i == 0)
            num = sum;
        if (sum != num)
            flag = false;
    }
    //check if the numbers are unique
    if(s.size() != n*n)
        flag = false;
    debug(flag);
    // // check diagonal
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
    }
    if (sum != num)
        flag = false;
    debug(flag);

    // check the other diagonal
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][n - i - 1];
    }
    if (sum != num)
        flag = false;
    debug(flag);

    // check columns
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += mat[j][i];
        }
        if (sum != num)
            flag = false;
    }

    if (!flag)
        cout << 0<<"\n";
    else
    cout << num<<"\n";

    return 0;
}