/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int x, m;
    do
    {
        cin >> x >> m;
        if (x == 0)
        {
            break;
        }
        printf("%llu\n", m * x);
    } while (x != 0 && m != 0);

    return 0;
}