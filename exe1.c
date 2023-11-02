// criando minha primeira matriz
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define N 15

int main()
{
  setlocale(LC_ALL, "portuguese");

  float vetor[N];
  float maiornum, menornum;
  int primeiroacesso = 1;

  srand(time(NULL));

  for (int i = 0; i < 15; i++)
  {
    vetor[i] = rand() % 101;

    printf("%.2f\n", vetor[i]);

    if (primeiroacesso)
    {
      maiornum = vetor[i];
      menornum = vetor[i];

      primeiroacesso = 0;
    }
    if (vetor[i] > maiornum)
    {
      maiornum = vetor[i];
    }
    if (vetor[i] < menornum)
    {
      menornum = vetor[i];
    }
  }
  printf("maior numero %.2f\n", maiornum);
  printf("menor numero %.2f\n", menornum);

  return 0;
}