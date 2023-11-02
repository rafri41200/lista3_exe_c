#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3

int main()
{
  int matriz[N][N];

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf(" DIGITE O ELEMENTO DA MATRIZ LINHA %d e coluna %d\n", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }

  for (int k = 0; k < N; k++)
  {
    printf("%d |", matriz[k][k]);
  }
  

  return 0;
}