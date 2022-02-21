//ITS NOT MY CODE, MY CODE WORKS, BUT INSISTS IN AN ERROR WITH POINTERS THAT I DONT KNOW HOW TO FIX
#include <stdio.h>
#include <stdlib.h>
 
typedef struct no
{
    char valor;
    struct no *esq;
    struct no *dir;
} t_no;
 
int preIndex = 0;
 
t_no* novo_no(char valor)
{
    t_no* no = (t_no*)malloc(sizeof(t_no));
    no->valor = valor;
    no->esq = NULL;
    no->dir = NULL;
    return(no);
}
 
int procurar(char arr[], int strt, int end, char value)
{
    int i;
    for(i = strt; i <= end; i++)
    {
        if(arr[i] == value)
            return i;
    }
    return -1;
}
 
t_no* construirArvore(char in[], char pre[], int inStrt, int inEnd)
{
    if(inStrt > inEnd)
        return NULL;
    t_no *tNode = novo_no(pre[preIndex++]);
    if(inStrt == inEnd)
        return tNode;
    int inIndex = procurar(in, inStrt, inEnd, tNode->valor);
    tNode->esq = construirArvore(in, pre, inStrt, inIndex - 1);
    tNode->dir = construirArvore(in, pre, inIndex + 1, inEnd);
    return tNode;
}
 
void imprimirPosOrdem(t_no* no)
{
    if (no == NULL)
        return;
    imprimirPosOrdem(no->esq);
    imprimirPosOrdem(no->dir);
    printf("%c", no->valor);
}
 
int main(int argc, char** argv)
{
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
    {
        char pre[1000], in[1000];
        int tam;
        scanf("%d %s %s%*c", &tam, pre, in);
        preIndex = 0;
        t_no * raiz = construirArvore(in, pre, 0, tam - 1);
        imprimirPosOrdem(raiz);
        printf("\n");
    }
    return 0;
}