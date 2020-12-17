#include <stdio.h>
#include <stdlib.h>

int main()

{
    double entrada;
    int entrada_centavos;

    scanf("%lf", &entrada);           //53
    entrada_centavos = 100 * entrada; ///Vai pra centavo //5300

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", entrada_centavos / 10000);
    entrada_centavos = (entrada_centavos % 10000); //5300
    printf("%d nota(s) de R$ 50.00\n", entrada_centavos / 5000);
    entrada_centavos = (entrada_centavos % 5000); //300
    printf("%d nota(s) de R$ 20.00\n", entrada_centavos / 2000);
    entrada_centavos = (entrada_centavos % 2000); //300
    printf("%d nota(s) de R$ 10.00\n", entrada_centavos / 1000);
    entrada_centavos = (entrada_centavos % 1000); //300
    printf("%d nota(s) de R$ 5.00\n", entrada_centavos / 500);
    entrada_centavos = (entrada_centavos % 500); //300
    printf("%d nota(s) de R$ 2.00\n", entrada_centavos / 200);
    entrada_centavos = (entrada_centavos % 200); //100

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", entrada_centavos / 100);
    entrada_centavos = entrada_centavos % 100; //0
    printf("%d moeda(s) de R$ 0.50\n", entrada_centavos / 50);
    entrada_centavos = entrada_centavos % 50; //0
    printf("%d moeda(s) de R$ 0.25\n", entrada_centavos / 25);
    entrada_centavos = entrada_centavos % 25; //0
    printf("%d moeda(s) de R$ 0.10\n", entrada_centavos / 10);
    entrada_centavos = entrada_centavos % 10; //0
    printf("%d moeda(s) de R$ 0.05\n", entrada_centavos / 5);
    entrada_centavos = entrada_centavos % 5; //0
    printf("%d moeda(s) de R$ 0.01\n", entrada_centavos / 1);

    return 0;
}