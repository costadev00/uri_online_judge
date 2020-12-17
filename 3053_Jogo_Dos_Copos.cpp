/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int n, mov;
    char car, a = 'A', b = 'B', c = 'C';
    cin >> n;
    cin >> car;
    for (int i = 1; i <= n; i++)
    {
        cin >> mov;

        if (mov == 1)
        {
            if (car == 'A')
            {
                car = 'B';
            }
            else if (car == 'B')
            {
                car = 'A';
            }
            // a = b;
            // b = a;
        }

        if (mov == 2)
        {
            if (car == 'B')
            {
                car = 'C';
            }
            else if (car == 'C')
            {
                car = 'B';
            }
            // b = c;
            // c = b;
        }

        if (mov == 3)
        {
            if (car == 'C')
            {
                car = 'A';
            }
            else if (car == 'A')
            {
                car = 'C';
            }
            // a = c;
            // c = a;
        }
    }
    if (car == 'A')
    {
        printf("%c\n", car);
    }
    else if (car == 'B')
    {
        printf("%c\n", car);
    }
    else if (car == 'C')
    {
        printf("%c\n", car);
    }
    return 0;
}