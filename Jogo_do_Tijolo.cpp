/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    vector<int> vet;
    int t;
    cin >> t;
    int aux = 1;
    int n;
    int md;
    float res = 0;
    int k = 0;
    while (t--)
    {
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            cin >> x;
            if (x >= 11 && x <= 20)
            {
                vet.push_back(x);
            }
        }
        sort(vet.begin(), vet.end());
        n = vet.size();
        md = n / 2;
        if (n % 2 == 0)
        {

            res = vet[md - 1] + vet[md];
            cout << "Case " << aux << ": " << res / 2 << endl;
        }
        else
        {
            cout << "Case " << aux << ": " << vet[md] << endl;
        }
        aux++;
        n = 0, md = 0, res = 0;
        vet.clear();
    }
    return 0;
}