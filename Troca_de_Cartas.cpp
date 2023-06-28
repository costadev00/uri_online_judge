#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1005;

int A[MAXN], B[MAXN]; // conjuntos de Alice e Beatriz
int dp[MAXN][MAXN];   // matriz de programação dinâmica
int n;                // tamanho dos conjuntos

int main()
{

    while (cin >> n)
    {

        for (int i = 1; i <= n; i++)
        {
            cin >> A[i];
        }

        for (int i = 1; i <= n; i++)
        {
            cin >> B[i];z
        }

        // preenche a primeira linha e coluna com zero
        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = 0;
            dp[0][i] = 0;
        }

        // percorre a matriz linha por linha
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                // opção 1: não trocar nenhuma carta
                int op1 = dp[i - 1][j];

                // opção 2: trocar uma carta de Alice
                int op2 = -1;
                if (B[j] == A[i])
                    op2 = dp[i - 1][j - 1] + 1;

                // opção 3: trocar uma carta de Beatriz
                int op3 = -1;
                if (A[i] == B[j])
                    op3 = dp[i][j - 1] + 1;

                // escolhe o maior valor entre as três opções
                dp[i][j] = max(op1, max(op2, op3));
            }
        }

        // o número máximo de cartas trocadas é o valor da última célula da matriz
        cout << dp[n][n] << endl;
    }
    return 0;
}
