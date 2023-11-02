#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <math.h>

#define N 3

int main(){

  int vetor[N];
  int soma=0,prod=1;
  float mediaA, mediaG;

   srand(time(NULL));

   for (int i = 0; i < 3; i++)
   {
    vetor[i]= rand() % 20;
    printf("vetor: %d\n", vetor[i]);
   }
   for (int i = 0; i < 3; i++)
   {
     soma += vetor[i];
     prod *= vetor[i];
   }
   mediaA = soma / 3.0;
   mediaG = pow(prod,1.0/3.0);

   printf("\n a media aritimetica e:%.2f\n", mediaA);
   printf("\na media geometrica e:%.2f\n", mediaG);

  return 0;
}