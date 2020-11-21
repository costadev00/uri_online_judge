/*

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    float b;
    char c;
    char d[51];
    scanf("%d %f %c %[^\n]", &a, &b, &c, d);
    printf("%d%f%c%s\n", a, b, c, d);
    printf("%d\t%f\t%c\t%s\n", a, b, c, d);
    printf("%10d%10f%10c%10s\n", a, b, c, d);
    return 0;
}