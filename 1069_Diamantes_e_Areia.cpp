/*
TODO SOLVE
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cont = 0;
    stack<char> s, s2;
    char exp[1001];
    char diam[1001];
    char cara;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> exp;
        for (int j = 0; j < strlen(exp); j++)
        {
            if (exp[j] == '<' || exp[j] == '>')
            {
                s.push(exp[j]);
            }
        }

        while (!s.empty())
        {
            if (s.top() == '>')
            {
                s.emplace
                    cont++;
            }
            if (s.top() == '<')
            {
                cont--;
            }
            s.pop();
        }
        printf("%d\n", cont);
        cont = 0;
    }

    return 0;
}