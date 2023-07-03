#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;

int N;

int memo[1005][1005];

int maxPresentes(int I, int J)
{
    // Se já calculamos esse caso, basta retornar o resultado da memória
    if (memo[I][J] != -1)
        return memo[I][J];

    // Se o intervalo é válido e tem tamanho 1, o único valor possível é -1
    if (I < J)
        return memo[I][J] = -1;

    // Se o intervalo é válido e tem tamanho 2, o maior valor possível é -3
    if (I + 1 == J)
        return memo[I][J] = -3;

    // Inicialmente, consideramos o caso em que o intervalo é vazio e o valor é zero
    int ans = 0;

    // Vamos tentar escolher cada criança do intervalo como o início de um novo intervalo
    for (int i = I; i < J; i++)
    {
        // Calculamos o valor mínimo que Papai Leon pode obter se escolher o intervalo [i, J]
        int val = maxPresentes(i, J);
        // Se o valor for positivo, isso significa que Papai Noel vai ganhar esse intervalo
        // e, portanto, Papai Leon deve tentar minimizar o prejuízo
        if (val > 0)
            val = INF;
        // Atualizamos o valor mínimo
        ans = min(ans, val);
    }

    // Armazenamos o resultado na memória e o retornamos
    return memo[I][J] = ans;
}

bool jogoDosPapaisNoel(int I, int J)
{
    // Se já calculamos esse caso, não precisamos fazer nada
    if (memo[I][J] != -1)
        return false;

    // Se o intervalo é válido e tem tamanho 1, o único valor possível é -1
    if (I < J)
        return memo[I][J] = -1;

    // Se o intervalo é válido e tem tamanho 2, o maior valor possível é -3
    if (I + 1 == J)
        return memo[I][J] = -3;

    // Inicialmente, consideramos o caso em que o intervalo é vazio e o valor é zero
    int ans = 0;

    // Vamos tentar escolher cada criança do intervalo como o início de um novo intervalo
    for (int i = I; i < J; i++)
    {
        // Calculamos o valor mínimo que Papai Leon pode obter se escolher o intervalo [i, J]
        int val = maxPresentes(i, J);
        // Se o valor for positivo, isso significa que Papai Noel vai ganhar esse intervalo
        // e, portanto, Papai Leon deve tentar minimizar o prejuízo
        if (val > 0)
            val = INF;
        // Atualizamos o valor mínimo
        ans = min(ans, val);
    }

    // Armazenamos o resultado na memória e retornamos false para indicar que não precisamos
    // fazer nada mais
    memo[I][J] = ans;
    return false;
}

int main()
{
    int M;
    cin >> N >> M;

    for (int i = 0; i < M; i++)
    {
        int I, J;
        cin >> I >> J;

        // Chamamos a função jogoDosPapaisNoel passando os valores lidos como parâmetros
        jogoDosPapaisNoel(I - 1, J - 1);
    }

    // No final, verificamos se há alguma criança em débito com Papai Leon
    bool devedor = false;
    for (int i = 0; i < N; i++)
    {
        if (memo[i][i] < 0)
        {
            devedor = true;
            break;
        }
    }

    if (devedor)
        cout << "Papai Leon" << endl;
    else
        cout << "Papai Noel" << endl;

    return 0;
}
