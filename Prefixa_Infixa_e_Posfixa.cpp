//TODO:SOLVE
#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

struct Node
{
    char data;
    struct Node *left, *right;
    Node(char data)
    {
        this->data = data;
        left = right = NULL;
    }
    Node()
    {
        left = right = NULL;
    }
};
using namespace std;

int main()
{
    fastio;
    int c, n;
    string s1, s2;
    struct Node *root = new Node();
    cin >> c;
    while (c--)
    {
        cin >> n;
        cin >> s1;
        cin >> s2;
        for (int i = 0; i < s1.length(); i++)
        {
            root->left
        }
    }
    return 0;
}