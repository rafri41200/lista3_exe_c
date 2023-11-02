#include <stdio.h>
#include <string.h>

#define N 50
int main()
{ // comparando palavras sem o strcmp
  char str1[N], str2[N];
  int igual = 1;
  printf("escreva uma palavra:\n");
  scanf("%s", str1);
  printf("escreva outra palavra:\n");
  scanf("%s", str2);
  // comprimento e igualdade

  if (strlen(str1) != strlen(str2))
  {
    igual = 0;
  }
  else
  {

    for (int i = 0; str1[i] != '\0'; i++)
    {
      if (str1[i] != str2[i])
      {
        igual = 0;
        break;
      }
    }
  }

  if (igual)
  {
    printf("as palavras são iguais\n");
  }
  else
  {
    printf("as palavras são diferentes\n");
  }
  // comparando palavras com o strcmp
  /*printf("escreva uma palavra:\n");
  scanf("%s", str1);
  printf("escreva outra palavra:\n");
  scanf("%s", str2);

  x = strcmp(str1,str2);
  printf("%d", x);
  if(x == 0)
     printf("palavras iguais\n");
  if(x > 0)
     printf("primeira palavra maior que a segunda\n");
  if(x < 0)
     printf("primeira palavra menor que a segunda\n");*/

  return 0;
}