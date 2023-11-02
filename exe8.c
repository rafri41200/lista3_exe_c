#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 100

int main()
{

  int vetor[N];
  int min, max, aux;

  printf("Digite o valor mínimo do intervalo: ");
  scanf("%d", &min);
  printf("Digite o valor máximo do intervalo: ");
  scanf("%d", &max);

  for (int x = 0; x < N; x++)
  {
    vetor[x] = min + rand() % (max - min + 1);
    printf(" %d  ", vetor[x]);
  }
  // por bublle sort
  for (int i = 1; i < N; i++)
  {
    for (int j = 0; j < N - 1; j++)
    {
      if (vetor[j] > vetor[j + 1])
      {
        aux = vetor[j];
        vetor[j] = vetor[j + 1];
        vetor[j + 1] = aux;
      }
    }
  }

  for (int y = 0; y < N; y++)
  {
    printf("\n %d ", vetor[y]);
  }

  /* por selection sort
  for (int i = 0; i < N; i++)
  {
    for (int j = i; j < N; j++)
    {
      printf("i: %d j: %d ", i,j);
      if (vetor[i] > vetor[j])
      {
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }

  for (int y = 0; y < N; y++)
  {
    printf("\n %d ", vetor[y]);
  }
  */

  return 0;
}
