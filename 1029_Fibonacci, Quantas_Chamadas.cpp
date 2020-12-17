/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int cont = 0;

int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        cont++;
        return (fibo(n - 1) + fibo(n - 2));
    }
}

int main()
{
    int n, res, t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cont = 0;
        res = fibo(n);
        printf("fib(%d) = %d calls = %d\n", n, cont * 2, res);
    }
    return 0;
}