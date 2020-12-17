/*

*/
#include <bits/stdc++.h>
using namespace std;

#define MAXSIZE 100100

long long fibo[MAXSIZE] = {0};
long long fibo_not[MAXSIZE] = {0};

void fibonacci();

int main()
{
    int n;
    cin >> n;
    fibonacci();
    printf("%d\n", fibo_not[n]);
    return 0;
}

void fibonacci()
{
    int i, j, k;
    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i < MAXSIZE; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (i = 1, j = 2, k = 1; i <= MAXSIZE; ++i)
        if (fibo[j] != i)
        {
            fibo_not[k++] = i;
        }
        else
        {
            ++j;
        }
}