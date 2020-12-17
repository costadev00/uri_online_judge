/*
Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1, respectivamente, para cada uma destas notas e mostre esta média acompanhada pela mensagem "Media: ". Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a média calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.". Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem "Aluno em exame.".

No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno. Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada. Recalcule a média (some a pontuação do exame com a média anteriormente calculada e divida por 2). e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) ou "Aluno reprovado.", (caso a média tenha ficado 4.9 ou menos). Para estes dois casos (aprovado ou reprovado após ter pego exame) apresente na última linha uma mensagem "Media final: " seguido da média final para esse aluno.

Entrada
A entrada contém quatro números de ponto flutuante correspendentes as notas dos alunos.

Saída
Todas as respostas devem ser apresentadas com uma casa decimal. As mensagens devem ser impressas conforme a descrição do problema. Não esqueça de imprimir o enter após o final de cada linha, caso contrário obterá "Presentation Error".
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    double n1 = 0, n2 = 0, n3 = 0, n4 = 0, media = 0, exame = 0;
    scanf("%lf", &n1);
    scanf("%lf", &n2);
    scanf("%lf", &n3);
    scanf("%lf", &n4);
    n1 = n1 * 2;
    n2 = n2 * 3;
    n3 = n3 * 4;
    n4 = n4 * 1;

    media = (n1 + n2 + n3 + n4) / 10;
    printf("Media: %.1lf\n", media);
    if (media >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    if (media < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    if (media >= 5.0 && media <= 6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &exame);
        printf("Nota do exame: %.1lf\n", exame);
        media = (media + exame) / 2;
        if (media >= 5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", media);
        }
        else if (media <= 4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", media);
        }
    }
    return 0;
}