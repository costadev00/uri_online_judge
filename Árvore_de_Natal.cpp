#include <bits/stdc++.h>
using namespace std;

int x = 0;

int asterisco(int n)
{
    if (n == 0)
    {
        return 1;
    }
    for (int i = 0; i <= n; i++)
    {
        cout << ' ';
    }
    for (int i = 0; i <= x; i++)
    {
        printf("* ");
    }
    printf("\n");
    x += 2;
    return (asterisco(n - 1));
}

int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i += 2)
        {
            for (int j = 0; j < (n - i) / 2; j++)
                printf(" ");

            for (int z = i; z >= 0; z--)
                printf("*");

            printf("\n");
        }
        for (int i = 0; i < n / 2; i++)
            cout << " ";
        cout << "*\n";
        for (int i = 1; i < (n / 2); i++)
            cout << " ";
        cout << "***\n\n";
    }
    return 0;
}