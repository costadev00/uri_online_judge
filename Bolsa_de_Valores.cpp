//TODO:SOLVE
//TLE
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
    vector<int> val;
    int N, c;
    cin >> N >> c;
    int x;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        val.push_back(x);
    }
    N = val.size();
    vector<int> A(N, 0);
    //make this recursive using dynamic programming
    for (int i = 1; i < N; i++)
    {
        A[i] = A[i - 1];
        for (int j = 0; j < i; j++)
        {
            A[i] = max(A[i], val[i] - val[j] - c + A[j]);
        }
    }
    cout << A[N - 1] << endl;
    return 0;
}
