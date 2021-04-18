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

// void readint(int &number)
// {
//     bool negative = false;
//     register int c;

//     number = 0;

//     c = getchar();
//     if (c == '-')
//     {
//         // number is negative
//         negative = true;
//         c = getchar();
//     }

//     for (; (c > 47 && c < 58); c = getchar())
//         number = number * 10 + c - 48;
//     if (negative)
//         number *= -1;
// }

struct Stack
{
    stack<int> s;
    int minEle;

    void getMin()
    {
        if (s.empty())
            cout << "EMPTY\n";
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

        if (t < minEle)
        {
            minEle = 2 * minEle - t;
        }
    }

    void push(int x)
    {
        if (s.empty())
        {
            minEle = x;
            s.push(x);
            return;
        }

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
    Stack s;
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