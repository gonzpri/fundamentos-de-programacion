#include <stdio.h>

int main () {
    //Input letras
    char letra[4];
    int i,j,k,l;
    
    printf("Escribe cuatro letras \n");
    scanf("%c %c %c %c", &letra[0], &letra[1], &letra[2], &letra[3]);

    printf("Las cuatro letras son: %c, %c, %c, %c.\n",letra[0], letra[1], letra[2], letra[3]);

    //Ordenar letras
    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            if (i!=j){
                for (k=0;k<4;k++){
                    if (k!=i && k!=j){
                        for (l=0;l<4;l++){
                            if (l!=i && l!=j && l!=k){
                            printf("%c, %c, %c, %c.\n" ,letra[i], letra[j], letra[k], letra[l]);
                            }
                        }
                    }
                }
            } 
        }

    }
    printf("\n");
    return 0;
}