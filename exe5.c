#include <stdio.h>
#include <string.h>

#define N 50

int main()
{
  char str1[N], str2[N];

  printf("escreva uma palavra\n");
  scanf("%s", str1);
  printf("escreva outra palavra\n");
  scanf(" %s", str2);
  //não usando o strcat

  printf("%s%s",str1,str2);

  // usando o strcat
  /*strcat(str1,str2);

  printf("palavras concatenadas %s\n", str1);
  */

  return 0;
}