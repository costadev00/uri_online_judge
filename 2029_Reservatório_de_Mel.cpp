#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    float n = 3.14, altura = 0.00, area = 0.0, v, d, r, r2;
    while (scanf("%f %f", &v, &d) != EOF)
    {
        r = d / 2.0;
        r2 = r * r;
        altura = v / (n * r2);
        area = n * r2;
        printf("ALTURA = %.2f\n", altura);
        printf("AREA = %.2f\n", area);
    }
    return 0;
}