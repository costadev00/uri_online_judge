#include <stdio.h>

int main()
{
    char st[1001];
    char c;
    int j = 0, i = 0, ip = 0;
    do
    {
        scanf("%c", &c);
        if (c == ' ')
        {
            ip--;
            st[i++] = c;
        }
        else if (ip % 2 != 0)
            st[i++] = c;
        ip++;
    } while (c != '\n');
    st[i] = '\0';
    printf("%s\n", st);
    return 0;
}