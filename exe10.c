#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 3

int main()
{
  int matriz[N][N];
  int x, cont = 0;

  printf(" DIGITE UM VALOR de 0 a 10\n");
  scanf("%d", &x);
  srand(time(NULL));

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {

      matriz[i][j] = rand() % 11;
      printf("| %2d |", matriz[i][j]);
      if (x == matriz[i][j])
      {
        cont += 1;
      }
    }
    printf("\n");
  }

  printf("a quantidade de vezes que o %d aparece eh %d \n", x, cont);

  return 0;
}