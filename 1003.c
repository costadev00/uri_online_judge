// Leia dois valores inteiros, no caso para variáveis A e B. A seguir, calcule a soma entre elas e atribua à variável SOMA. A seguir escrever o valor desta variável.

// Entrada
// O arquivo de entrada contém 2 valores inteiros.

// Saída
// Imprima a variável SOMA com todas as letras maiúsculas, com um espaço em branco antes e depois da igualdade seguido pelo valor correspondente à soma de A e B.
//  Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int A, B, soma = 0;
    scanf("%d", &A);
    scanf("%d", &B);
    soma = A + B;
    printf("SOMA = %d\n", soma);
    return 0;
}