#include <stdio.h>

#define N 10

int v[N];

int main () {
    int i,j;
    int tmp;
   
   printf("Escribe 10 numeros: ");
      for (i = 0;i < N ;i++){
      scanf("%d", &v[i]);
      }

      for (i = 0; i < N/2; i++){
         tmp = v[i];
         v[i] = v[N-1-i];
         v[N-1-i] = tmp;      
      }

      for (i = 0;i < N ;i++){
      printf("%d, ",v[i]);
      printf("\n");
   }
}