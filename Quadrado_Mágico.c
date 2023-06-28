#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define fastio                            \
    ios_base::sync_with_stdio(false);     \
    cin.tie(NULL)

#define MAX_SIZE 1001

int main()
{
    int n;
    scanf("%d", &n);
    int mat[n][n];
    bool flag = true;
    int num = 0;
    int set[n* n];
    int setSize = 0;
    
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
            bool found = false;
            for (int k = 0; k < setSize; k++) {
                if (set[k] == mat[i][j]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                set[setSize] = mat[i][j];
                setSize++;
            }
        }
        if (i == 0)
            num = sum;
        if (sum != num)
            flag = false;
    }

    // Check if the numbers are unique
    if (setSize != n * n)
        flag = false;

    // Check diagonal
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][i];
    }
    if (sum != num)
        flag = false;

    // Check the other diagonal
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += mat[i][n - i - 1];
    }
    if (sum != num)
        flag = false;

    // Check columns
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += mat[j][i];
        }
        if (sum != num)
            flag = false;
    }

    if (!flag)
        printf("0\n");
    else
        printf("%d\n", num);

    return 0;
}
