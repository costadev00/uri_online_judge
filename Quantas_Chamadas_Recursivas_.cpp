// TODO:SOLVE
#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int cont;
// To return char for a value. For example '2'
// is returned for 2. 'A' is returned for 10. 'B'
// for 11
char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}

// Utility function to reverse a string
void strev(char *str)
{
    int len = strlen(str);
    int i;
    for (i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to convert a given decimal number
// to a base 'base' and
char *fromDeci(char res[], int base, int inputNum)
{
    int index = 0; // Initialize index of result

    // Convert input number is given base by repeatedly
    // dividing it by base and taking remainder
    while (inputNum > 0)
    {
        res[index++] = reVal(inputNum % base);
        inputNum /= base;
    }
    res[index] = '\0';

    // Reverse the result
    strev(res);

    return res;
}
int fib(int n)
{
    cont++;
    if (n == 0 || n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    fastio;
    int n, b, c = 1;
    char res[100];
    while (cin >> n >> b)
    {
        if (n == 0 && b == 0)
            break;
        cont = 0;
        fib(n);

        cout << "Case " << c << ": " << n << " " << b << " "
             << fromDeci(res, b, cont) << endl;
        c++;
    }
    return 0;
}