/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, id, id_gm, res = 0;
    while (cin >> n >> l)
    {

        for (int i = 0; i < n; i++)
        {
            cin >> id >> id_gm;
            if (id == l)
            {
                if (id_gm == 0)
                {
                    res++;
                }
            }
        }
        printf("%d\n", res);
        res = 0;
    }
    return 0;
}