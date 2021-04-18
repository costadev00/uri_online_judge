#include <stdio.h>
#include <string.h>

/*
 O problema na verdade pode ser resolvido em tempo O(N*M) ou até em tempo constante,
 mas a princípio coloquei como solução o backtracking (também pode ser melhorado com alguma poda no backtracking). 
 Se precisar dificultar, dá pra colocar valores maiores de N e M.
 A solução é um caminho máximo no grafo das células de coordenadas ímpares (vértices são os asteriscos). 
	
	*-*-*-*
	|#|#|#|
	*-*-*-*
	|#|#|#|
	*-*-*-*
	|#|#|#|
	*-*-*-*

 Sempre é possível derrubar os armários para forçar o caminho máximo como único caminho 
 e obviamente não dá pra fazer melhor que o caminho máximo. 
 Também não é possível bloquear completamente o caminho entre a entrada e a saída 
 já que os dois ficam na borda do grid (é fácil ver tentando fazer um corte no grafo).
*/

char grid[1123][1123];
int n, m;
int xf, yf;

int dx[4] = {2, -2, 0, 0};
int dy[4] = {0, 0, 2, -2};

int best = 0;

void foo(int x, int y, int k)
{
    if (x == xf && y == yf && k > best)
        best = k;
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (grid[x + dx[i]][y + dy[i]] == '.')
            {
                int tmp = grid[x + dx[i]][y + dy[i]];
                grid[x + dx[i]][y + dy[i]] = '@';

                foo(x + dx[i], y + dy[i], k + 1);

                grid[x + dx[i]][y + dy[i]] = tmp;
            }
        }
    }
}

int main(void)
{
    int xi, yi;
    scanf("%d %d %d %d %d %d", &n, &m, &xi, &yi, &xf, &yf);
    memset(grid, '#', sizeof(grid));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (i % 2 || j % 2)
                grid[i][j] = '.';

    grid[xi][yi] = '#';
    foo(xi, yi, 1);
    printf("%d\n", 2 * best - 1);
}