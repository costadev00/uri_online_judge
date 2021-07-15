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

int maxElement(int n, int k)
{
    for (int j = 0; j < k; j++)
    {
        int i = 1;
        int ans = 0;
        while (n / i > 0)
        {
            // Store the numbers formed after
            // removing every digit once
            int temp = (n / (i * 10)) * i + (n % i);
            i *= 10;

            // Compare and store the maximum
            ans = max(ans, temp);
        }
        n = ans;
    }
    return n;
}
int main()
{
    fastio;
    // int d, n;
    // while (cin >> d >> n && d && n)
    // {
    //     // vector<int> vet;
    //     // int a;
    //     // char c;
    //     int y;
    //     cin >> y;
    //     // while (d--)
    //     // {
    //     //     cin >> c;
    //     //     a = c;
    //     //     vet.push_back(a);
    //     // }
    //     int x = maxElement(y, n);
    //     // while (n--)
    //     // {
    //     //     // vet.erase(min_element(vet.begin(), vet.end()));
    //     // }
    //     cout << x << endl;
    //     // for (auto i : vet)
    //     //     printf("%c", i);
    //     // printf("\n");
    //     // 77676489625376239619
    // }

    //THAT WAS WHAT I TRIED
    int n, d;
    vector<char> num;

    while (cin >> n >> d && n && d)
    {
        int acm = 0;
        char c;

        for (int i = 0; i < n; i++)
        {
            cin >> c;

            while (!num.empty() && acm < d && c > num.back())
            {
                num.pop_back();
                acm++;
            }

            if (num.size() < n - d)
                num.push_back(c);
        }

        for (int i = 0; i < num.size(); i++)
            cout << num[i];
        cout << endl;
        num.clear();
    }
    return 0;
}