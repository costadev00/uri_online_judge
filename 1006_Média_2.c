// Leia 3 valores, no caso, variáveis A, B e C, que são as três notas de um aluno.
// A seguir, calcule a média do aluno, sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
// Considere que cada nota pode ir de 0 até 10.0, sempre com uma casa decimal.

// Entrada
// O arquivo de entrada contém 3 valores com uma casa decimal, de dupla precisão (double).

// Saída
// Imprima a variável MEDIA conforme exemplo abaixo, com 1 dígito após o ponto decimal e com um espaço em branco antes e depois da igualdade.
//  Assim como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

#include <stdio.h>
#include <stdlib.h>
int main()
{
    double a, b, c, peso_a = 2, peso_b = 3, peso_c = 5, MEDIA = 0;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    a = a * peso_a;
    b = b * peso_b;
    c = c * peso_c;
    MEDIA = (a + b + c) / 10;
    printf("MEDIA = %.1lf\n", MEDIA);
    return 0;
}