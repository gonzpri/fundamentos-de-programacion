#include <stdio.h>

int n,i,j;
int es_primo;

int main () {

    printf("Introduce un numero: ");
    scanf("%d", &n);

    for (i = 2;i<=n;i++){

        es_primo = 1;
        j = 2;

        while (es_primo && (j<i)){
            if (i%j==0){
                es_primo=0;
            }
            j++;
        }
            if (es_primo){
            printf("%d ",i);
        }
    }
        return 0;
}
