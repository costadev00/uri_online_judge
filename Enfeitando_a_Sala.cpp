#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

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

// Function to check if it is possible to find a non-contiguous
// subsequence of s1 in s
bool nonContigSubseq(string s, string s1)
{
    // create an unordered set to store all characters of s1
    unordered_set<char> set;
    for (char ch : s1)
        set.insert(ch);

    // traverse through the string s and check if all characters
    // of s1 are present in s
    for (char ch : s)
        if (set.count(ch))
            return true;

    // return false if no character of s1 is present in s
    return false;
}

int main()
{
    string s = "Merry Christmas";
    int n;
    cin >> n;
    int ans = 0;
    while (n--)
    {
        int m;
        cin >> m;
        cin.ignore();
        while (m--)
        {
            string s1;
            read(s1);
            // erase ' ' from s1
            // s1.erase(remove(s1.begin(), s1.end(), ' '), s1.end());
            // tolower in s
            // transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
            if (nonContigSubseq(s, s1))
                ans++;
        }
    }
    cout << ans<<endl;
    return 0;
}