#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

// A function to check if a string str is palindrome
void isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;

    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            printf("N\n");
            return;
        }
    }
    printf("S\n");
}

int main()
{
    fastio;
    char s[51] = {0}, s2[51] = {0};
    cin >> s;
    for (int i = 0, j = 0; i < strlen(s); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            s2[j] = s[i];
            j++;
        }
    }
    isPalindrome(s2);
    return 0;
}