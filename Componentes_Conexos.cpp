//codigo nao autoral: para contar componentes uso bfs, pode ser encontrado no seguinte link:https://github.com/costadev00/competitive_programming/blob/main/connected_components.cpp
#include <stdio.h>

#define MAXN 30
#define BRANCO 0
#define CINZA 1
#define PRETO 2
#define SWAP(a, b) \
    {              \
        a ^= b;    \
        b ^= a;    \
        a ^= b;    \
    }

int cor[MAXN];
int componente[MAXN];

void inicFila(int q[])
{
    int i;

    for (i = 0; i < MAXN; i++)
        q[i] = -1;
}

void insereFila(int fila[], int inicio, int *fim, int vertice)
{
    fila[++(*fim)] = vertice;
}

int retiraFila(int fila[], int *inicio, int fim)
{
    int retorno = fila[*inicio];

    (*inicio)++;

    return retorno;
}

int filaVazia(int fila[], int inicio, int fim)
{
    if (fim < inicio)
        return 1;
    return 0;
}

void ordena(int vetor[])
{
    int i, j;
    int tamanho = 0;

    for (i = 0; i < MAXN && vetor[i] != -1; i++)
        tamanho++;

    for (i = 0; i < tamanho; i++)
    {
        for (j = i; j < tamanho; j++)
        {
            if (vetor[i] > vetor[j])
                SWAP(vetor[i], vetor[j]);
        }
    }
}

void BFS(int graph[MAXN][MAXN], int raiz, int N)
{
    int fila[MAXN], i, inicioFila = 0, fimFila = -1, inicioComponente = 0, fimComponente = -1;
    int atual;

    cor[raiz] = CINZA;

    inicFila(fila);
    inicFila(componente);

    insereFila(fila, inicioFila, &fimFila, raiz);
    insereFila(componente, inicioComponente, &fimComponente, raiz);

    while (!filaVazia(fila, inicioFila, fimFila))
    {
        atual = retiraFila(fila, &inicioFila, fimFila);
        for (i = 0; i < N; i++)
        {
            if (i != atual)
            {
                if (graph[atual][i] > 0)
                {
                    if (cor[i] == BRANCO)
                    {
                        cor[i] = CINZA;
                        insereFila(fila, inicioFila, &fimFila, i);
                        insereFila(componente, inicioComponente, &fimComponente, i);
                    }
                }
            }
        }
        cor[atual] = PRETO;
    }
}

int main(int argc, char **argv)
{

    char x, y;
    int N, M, C, i, j, k, u, v;
    int graph[MAXN][MAXN];
    int cont = 0;

    scanf("%d", &C);

    for (k = 0; k < C; k++)
    {
        scanf("%d %d", &N, &M);

        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                graph[i][j] = 0;

        for (i = 0; i < M; i++)
        {
            scanf(" %c", &x);
            scanf(" %c", &y);
            u = x - 'a';
            v = y - 'a';
            graph[u][v] = graph[v][u] = 1;
        }

        for (i = 0; i < N; i++)
        {
            cor[i] = BRANCO;
        }

        cont = 0;
        printf("Case #%d:\n", k + 1);
        for (i = 0; i < N; i++)
        {
            if (cor[i] == BRANCO)
            {
                cont++;
                BFS(graph, i, N);

                ordena(componente);
                for (j = 0; j < N && componente[j] != -1; j++)
                    printf("%c,", componente[j] + 'a');

                printf("\n");
            }
        }
        printf("%d connected components\n\n", cont);
    }
}
