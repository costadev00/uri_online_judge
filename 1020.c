/*
Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias.
 Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364.
  Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Imprima a saída conforme exemplo fornecido.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n = 0, ano = 0, mes = 0, dia = 0;
  scanf("%d", &n);
  if (n >= 365)
  {
    while (n >= 365)
    {
      n = n - 365;
      ano++;
    }
  }
  while (n >= 30)
  {
    n = n - 30;
    mes++;
  }

  dia = n;
  printf("%d ano(s)\n", ano);
  printf("%d mes(es)\n", mes);
  printf("%d dia(s)\n", dia);
  return 0;
}