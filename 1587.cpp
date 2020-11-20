/*
PS: RUNTIME ERROR
*/
#include <bits/stdc++.h>
using namespace std;

#define MAX 2000010
int bit[2][MAX + 10];

void update(int id, int pos, int val)
{
    for (; pos < MAX; pos += pos & -pos)
        bit[id][pos] += val;
}

int get(int id, int pos)
{
    int sum = 0;
    for (; pos; pos -= pos & -pos)
        sum += bit[id][pos];
    return sum;
}

int get(int id, int l, int r)
{
    return get(id, r) - (l <= 1 ? 0 : get(id, l - 1));
}

int getID(string s)
{
    return stoi(s.substr(1)) - 1;
}

int main()
{
    int n, e;
    while (scanf("%d %d", &n, &e), (n || e))
    {
        memset(bit, 0, sizeof bit);
        int jogadores[2][n / 2];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                scanf("%d", &jogadores[i][j]);
                jogadores[i][j]++;
                update(i, jogadores[i][j], 1);
            }
        }
        char c;
        bool impedido;
        string xi;
        int golsA = 0, golsB = 0;
        while (e--)
        {
            scanf(" %c", &c);
            if (c == 'I' || c == 'P')
            {
                cin >> xi;
                if (impedido)
                    continue;
                if (c == 'I')
                    impedido = false;

                int pos, total;
                if (xi[0] == 'A')
                {
                    pos = jogadores[0][getID(xi)];
                    total = get(1, pos + 1, MAX);
                }
                else if (xi[0] == 'B')
                {
                    pos = jogadores[1][getID(xi)];
                    total = get(0, 1, pos - 1);
                }
                if (total < n / 11.0)
                    impedido = true;
            }

            else if (c == 'M')
            {
                int pos;
                cin >> xi >> pos;
                pos++;
                int id = getID(xi);
                if (xi[0] == 'A')
                {
                    update(0, jogadores[0][id], -1);
                    jogadores[0][id] = pos;
                    update(0, jogadores[0][id], 1);
                }
                else
                {
                    update(1, jogadores[1][id], -1);
                    jogadores[1][id] = pos;
                    update(1, jogadores[1][id], 1);
                }
            }
            else if (c == 'S')
                impedido = false;
            else
            {
                cin >> xi;
                if (!impedido)
                {
                    if (xi[0] == 'A')
                        golsB++;

                    else
                        golsA++;
                }
                impedido = false;
            }
        }
        printf("%d X %d\n", golsA, golsB);
    }
    return 0;
}