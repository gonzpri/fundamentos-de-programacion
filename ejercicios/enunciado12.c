#include <stdio.h>

#define N 10

int v[N];

int main(){
    int i;

    printf("Escribe 10 numeros: ");

    for (i = 0;i < N ;i++){
      scanf("%d", &v[i]);

      if (v[i] % 3 == 0){
        v[i] += 2;

      } else if (v[i] % 2 == 0){
        v[i] += 1;
      }
    }

    for (i = 0;i < N ;i++){
      printf("%d, ",v[i]);
      printf("\n");
   }
   return 0;
}