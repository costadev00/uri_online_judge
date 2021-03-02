#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"
bool isSubSequence(char str1[], char str2[], int m, int n)
{
    int j = 0; // For index of str1 (or subsequence

    // Traverse str2 and str1, and
    // compare current character
    // of str2 with first unmatched char
    // of str1, if matched
    // then move ahead in str1
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;

    // If all characters of str1 were found in str2
    return (j == m);
}
using namespace std;

int main()
{
    fastio;
    int n, q;
    char s[100000], r[100000];
    cin >> n;
    while (n--)
    {
        cin >> s;
        cin >> q;
        for (int i = 0; i < q; i++)
        {
            cin >> r;
            if (isSubSequence(r, s, strlen(r), strlen(s)))
            {

                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }
    return 0;
}