/*

*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef struct celulaLista
{
    char nome[50];
    struct celulaLista *anterior;
    struct celulaLista *proximo;
} celula;

void insere_lista(celula **inicio, char nome[]);
void lista(celula *inicio, int num);

int main()
{
    char nome[50];
    // int opcao;
    celula *inicio;
    inicio = NULL;

    int n, k;
    cin >> n >> k;
    // int vet[n];
    // string names[n];
    // char nome[21];
    for (int i = 0; i < n; i++)
    {
        cin >> nome;
        insere_lista(&inicio, nome);
        // fgets(nome, 21, stdin);
        // names[i] = nome;
        // getchar();
        // getline(cin, names[i]);
    }
    // int x = sizeof(vet) / sizeof(vet[0]);
    // sort(vet, vet + x);

    // for (int i = 0; i < n; ++i)
    //     cout << vet[i] << " ";
    // printf("\n");
    // cout << nome << endl;
    lista(inicio, k);
    return 0;
}
void insere_lista(celula **inicio, char nome[])
{
    celula *novo;
    novo = (struct celulaLista *)malloc(sizeof(celula));
    if (!novo)
    {
        printf("\nSem Memoria!!!");
    }
    else
    {
        strcpy(novo->nome, nome);
        novo->proximo = NULL;
        novo->anterior = NULL;

        if (*inicio == NULL)
        {
            *inicio = novo;
        }
        else
        {
            celula *p = *inicio;

            while (p->proximo && strcmp(novo->nome, p->nome) == 1)
            {
                p = p->proximo;
            }
            if (p == *inicio && strcmp(novo->nome, p->nome) <= 0)
            {
                p->anterior = novo;
                novo->proximo = p;
                *inicio = novo;
            }
            else if (!p->proximo && strcmp(novo->nome, p->nome) == 1)
            {
                p->proximo = novo;
                novo->anterior = p;
            }
            else
            {
                novo->anterior = p->anterior;
                novo->proximo = p;
                p->anterior = novo;
                novo->anterior->proximo = novo;
            }
        }
    }
}
void lista(celula *inicio, int num)
{
    int cont = 0;
    celula *p;
    p = inicio;

    while (cont < num - 1)
    {
        p = p->proximo;
        cont++;
    }
    printf("%s\n", p->nome);
}