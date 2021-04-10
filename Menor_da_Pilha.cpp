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
#define read(n) getline(cin, n)
#define FOR(i, a, b) for (int i = a; i < b; i++)

struct MyStack
{
    stack<int> s;
    int minEle;

    // Prints minimum element of MyStack
    void getMin()
    {
        if (s.empty())
            cout << "EMPTY\n";

        // variable minEle stores the minimum element
        // in the stack.
        else
            cout << minEle << "\n";
    }

    // Remove the top element from MyStack
    void pop()
    {
        if (s.empty())
        {
            cout << "EMPTY\n";
            return;
        }

        int t = s.top();
        s.pop();

        // Minimum will change as the minimum element
        // of the stack is being removed.
        if (t < minEle)
        {
            minEle = 2 * minEle - t;
        }
    }

    // Removes top element from MyStack
    void push(int x)
    {
        // Insert new number into the stack
        if (s.empty())
        {
            minEle = x;
            s.push(x);
            return;
        }

        // If new number is less than minEle
        if (x < minEle)
        {
            s.push(2 * x - minEle);
            minEle = x;
        }

        else
            s.push(x);
    }
};

int main()
{
    fastio;
    MyStack s;
    int n, v;
    string op;
    cin >> n;
    stack<int> p;
    while (n--)
    {
        cin >> op;
        if (op == "PUSH")
        {
            cin >> v;
            s.push(v);
        }
        else if (op == "MIN")
        {
            s.getMin();
        }
        else
        {
            s.pop();
        }
    }
    return 0;
}