#include <bits/stdc++.h>

using namespace std;

int main()
{
    while (1)
    {
        int B, N;

        scanf("%d %d", &B, &N);

        if (B == 0)
            return 0;

        int saldo[B];

        for (int i = 0; i < B; i++)
        {
            scanf("%d", &saldo[i]);
        }

        while (N--)
        {
            int D, C, V;

            scanf("%d %d %d", &D, &C, &V);

            saldo[D - 1] -= V;
            saldo[C - 1] += V;
        }

        bool ok = true;

        for (int i = 0; i < B; i++)
        {
            if (saldo[i] < 0)
                ok = false;
        }

        printf("%c\n", ok ? 'S' : 'N');
    }
}
