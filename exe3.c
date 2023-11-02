#include<stdio.h>

#define N 100
int main(){
  
  char str[N];
  int cont=0;
  
  printf("digite uma palavra\n");
  scanf("%s", str);
  while (str[cont] != '\0')
  {
    cont++;
  }
  
  printf("a qunatidade de caracteres e: %d\n",cont);
  return 0;
}