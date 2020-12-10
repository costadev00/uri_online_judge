#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int v, p, tot = 0, cont = 0, cedulas = 100;

    do
    {
        cin >> v >> p;
        if (v == 0 || p == 0)
        {
            break;
        }
        tot = p - v;
        // do
        // {
        if (tot >= cedulas)
        {
            tot = tot - cedulas;
            cont++;
        }
        if (tot >= 50 && tot < 100)
        {
            cedulas = 50;
            tot = tot - cedulas;
            cont++;
        }
        if (tot >= 20 && tot < 50)
        {
            cedulas = 20;
            tot = tot - cedulas;
            cont++;
        }
        if (tot >= 10 && tot < 20)
        {
            cedulas = 10;
            tot = tot - cedulas;
            cont++;
        }
        if (tot >= 5 && tot < 10)
        {
            cedulas = 5;
            tot = tot - cedulas;
            cont++;
        }
        if (tot >= 2 && tot < 5)
        {
            cedulas = 2;
            tot = tot - cedulas;
            cont++;
        }

        // } while (tot != 0);
        if (cont == 2)
        {
            printf("possible\n");
        }
        else
        {
            printf("impossible\n");
        }
        cont = 0;
        cedulas = 100;
        tot = 0;
    } while (v != 0 || p != 0);

    return 0;
}