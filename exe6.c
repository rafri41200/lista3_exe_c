#include <stdio.h>
#include <string.h>

#define N 50

int main()
{
  char str1[N];
  int tamanho;
   
  printf("escreva uma palavra\n");
  scanf("%s", str1);
   tamanho = strlen(str1); 
  for (int i = tamanho-1; i >= 0; i--)
  {
    printf("%c", str1[i]);
  }

  return 0;
}