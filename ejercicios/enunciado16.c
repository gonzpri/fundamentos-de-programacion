#include <stdio.h>
#define N 8

int v[N], v2[N], v3[N], v5[N], v7[N];
int i;
int j = 0;

int main(){
    printf("Introduce 9 numeros: ");
    for (i = 0;i<N;i++){
        scanf("%d", &v[i]);
    }
    for (i = 0;i<N;i++){
        if (v[i] % 2 == 0){
            v2[j++] = v[i];
        }else if (v[i] % 3 == 0){
            v3[j++] = v[i];
        }else if (v[i] % 5 == 0){
            v5[j++] = v[i];
        }else if (v[i] % 7 == 0){
            v7[j++] = v[i];      
        }
    }
    printf("\n");
    printf("Multiplos de 2: ");
    for (i = 0;i<N;i++){
        if (v2[i] != 0){
        printf("%d ", v2[i]);
        }
    }
    printf("\n");
    printf("Multiplos de 3: ");
    for (i = 0;i<N;i++){
        if (v3[i] != 0){
        printf("%d ", v3[i]);
        }
    }
    printf("\n");
    printf("Multiplos de 5: ");
    for (i = 0;i<N;i++){
        if (v5[i] != 0){
        printf("%d ", v5[i]);
        }
    }
    printf("\n");
    printf("Multiplos de 7: ");
    for (i = 0;i<N;i++){
        if (v7[i] != 0){
        printf("%d ", v7[i]);
        }
    }
    printf("\n");
    return 0;
}