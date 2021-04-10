//TODO:SOLVE
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
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;

    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    do
    {
        c = a % b;
        if (c != 0)
        {
            a = b;
            b = c;
        }
    } while (c != 0);
    printf("MDC = %d\n", b);

    return 0;
}