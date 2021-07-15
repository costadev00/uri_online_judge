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

int main()
{
    fastio;
    int n;
    int co, ac, cont;
    string res;
    while (cin >> n)
    {
        stack<int> s;
        queue<int> q;
        priority_queue<int> pq;
        cont = 0;
        bool is_stack = true, is_queue = true, is_pq = true;
        while (n--)
        {
            cin >> co >> ac;
            if (co == 1)
            {
                s.push(ac);
                q.push(ac);
                pq.push(ac);
            }
            else
            {
                if (s.top() == ac)
                    s.pop();
                else
                    is_stack = false;
                if (q.front() == ac)
                    q.pop();
                else
                    is_queue = false;
                if (pq.top() == ac)
                    pq.pop();
                else
                    is_pq = false;
            }
        }
        if (is_stack && !is_queue && !is_pq)
            cout << "stack\n";
        else if (is_queue && !is_stack && !is_pq)
            cout << "queue\n";
        else if (is_pq && !is_stack && !is_queue)
            cout << "priority queue\n";
        else if (is_pq || is_stack || is_queue)
            cout << "not sure\n";
        else
            cout << "impossible\n";
    }
    return 0;
}