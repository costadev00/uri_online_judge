#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define N 2001

class Graph
{
public:
    int n; // Número de vértices
    vector<int> *adj;
    bool is_undirected;

    bool *visited = NULL; // visited[i] = true, se e somente se nós já tivermos visitado o i-ésimo vértice

    Graph(int n, bool is_undirected = true)
    {
        this->n = n;
        this->adj = new vector<int>[n];
        this->is_undirected = is_undirected;
    }

    void add_edge(int u, int v)
    {
        this->adj[u].push_back(v);
        if (this->is_undirected)
        {                              // Se o grafo não for direcionado
            this->adj[v].push_back(u); // Nós adicionamos a aresta de v para u
        }
    }

    int count_components()
    {
        delete this->visited; // Exclui o vetor anterior da memória. Isso é importante caso a gente chame count_components múltiplas vezes
        this->visited = new bool[this->n];

        int qtd_components = 0; // Guarda a quantidade de componentes do nosso grafo

        for (int i = 0; i < n; i++)
        {
            if (!this->visited[i])
            {
                this->bfs(i); // Marca todos os vértices que estão na mesma componente do i-ésimo vértice
                qtd_components++;
            }
        }

        return qtd_components;
    }

    void bfs(int source)
    {
        queue<int> q;

        q.push(source); // Adiciona a fonte a nossa fila
        this->visited[source] = true;

        while (!q.empty())
        {
            int current = q.front(); // Pega o primeiro vértice da nossa fila
            q.pop();                 // Remove current da nossa fila

            for (int i = 0; i < this->adj[current].size(); i++) // Itera por todos os vizinhos do vértice atual
            {
                int neighbour = this->adj[current][i];

                if (this->visited[neighbour]) // Checa se o vizinho já foi visitado
                    continue;

                q.push(neighbour);               // Adiciona o vizinho atual a nossa fila
                this->visited[neighbour] = true; // Marca o vizinho atual como visitado
            }
        }
    }
};

int main()
{
    fastio;
    int n, m;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
            break;

        int v, w, p;

        Graph graph(n+1);

        for (int i = 0; i < m; i++)
        {
            cin >> v >> w >> p;
            if (p == 1)
                graph.add_edge(v, w);
            else
            {
                graph.add_edge(v, w);
                graph.add_edge(w, v);
            }
        }

        int g = graph.count_components();
        debug(g);
        // if (g == 1)
        //     cout << 1 << endl;
        // else
        //     cout << 0 << endl;
    }
    return 0;
}