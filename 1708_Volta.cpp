/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t1, t2, dis = 0, v = 0;
    cin >> t1 >> t2; //5  // 7
    while (dis < t2)
    {
        dis += t2 - t1;
        v++;
    }
    printf("%d\n", v);
    return 0;
}