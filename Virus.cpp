#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define PI acos(-1)
#define e 2.718281828459

int gcd(int a, int b)
{
    return (b == 0 ? a : gcd(b, a % b));
}

int main(int argc, char **argv)
{
    int n;
    while (cin >> n)
    {
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int sum = 0;
        int i = 0;
        int j = n - 1;
        while (j > i)
        {
            sum += abs(a[i++] - a[j--]);
        }
        printf("%d\n", sum);
    }
    return 0;
}