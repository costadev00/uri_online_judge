//TODO SOLVE
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
    int j, sub = 0, caso = 1, seq = 0;
    string n, q;
    while (cin >> n)
    {
        j = 0;
        seq = 0;
        sub = 0;
        cin >> q;
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] == q[j])
            {
                sub = i;
                j++;
            }
            if (j >= q.size())
            {
                j = 0;
                seq++;
            }
        }
        printf("Caso #%d:\n", caso);
        printf("Qtd.Subsequencias: %d\n", seq);
        printf("Pos: %d\n", sub);
        printf("\n");
        caso++;
    }
    return 0;
}