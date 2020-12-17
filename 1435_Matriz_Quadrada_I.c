/*
my solution (not correct)
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 1, mat[100][100] = {0, 0};
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            mat[i][j] = 1;
            if (i == j)
            {
                mat[i][j] = 2;
            }
        }
    }
    while (n != 0)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            exit(0);
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("  %d ", mat[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
//OTHER SOLUTION(CORRECT)
/*
	@autor: Malbolge;
	@data: 06/08/218;
	@nome: Matriz Quadrada I;
*/

// #include <stdio.h>

// int main ()
// {

// 	//Valores discretos, sem sinal;
// 	unsigned short int tamanho, coluna, linha, iniMatriz, fimMatriz, elemento;

// 	while (1)
// 	{

// 		scanf("%hd", &tamanho);
// 		//Declaração de matriz de tamanho variado;
// 		short m[tamanho][tamanho];

// 		if (tamanho == 0)
// 			return 0;

// 		iniMatriz = 0;
// 		fimMatriz = tamanho;
// 		elemento = 1;

// 		while(1)
// 		{
// 			//Preenche matrizes de tamanho menor cada vez que o laço reinicia;
// 			for (linha = iniMatriz; linha < fimMatriz; linha++)
// 				for (coluna = iniMatriz; coluna < fimMatriz; coluna++)
// 					m[linha][coluna] = elemento;

// 			if (fimMatriz == 0)
// 				break;

// 			fimMatriz--;
// 			iniMatriz++;
// 			elemento++;

// 		}

// 		//Imprime a matriz;
// 		for (linha = 0; linha < tamanho; linha++)
// 		{
// 			for (coluna = 0; coluna < tamanho; coluna++)
// 			{
// 				if (coluna == 0)
// 					printf("%3hd", m[linha][coluna]);
// 				else
// 					printf(" %3hd", m[linha][coluna]);

// 			}

// 			printf("\n");
// 		}

// 		printf("\n");

// 	}
// }*/