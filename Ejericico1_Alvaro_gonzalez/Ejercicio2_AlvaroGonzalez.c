#include <stdio.h>

#define fila 3
#define columna 4

int main(){
    int i,j;
    int sala[fila][columna];
    int contGlobal = 0;
    int contFila[fila] = {0};
    int contColumna[columna] = {0};
    int filaMayor = 0;

    printf("Introduce 0 si la posicion esta libre y 1 si esta ocupada.\n");
    for (i=0;i<fila;i++){
        for (j=0;j<columna;j++){
            do{
                printf("Fila %d columna %d: ",i+1,j+1);
                scanf("%d",&sala[i][j]);
                scanf("%*[^\n]"); scanf("%*c");     //control de valores no numericos
            }
            while(sala[i][j] != 0 && sala[i][j] != 1 );   //valores validos 0 y 1

            //Contador de asientos ocupados global, por fila y por columna
            if (sala[i][j] == 1){
                contGlobal++;
                contFila[i]++;
                contColumna[j]++;
            }
            //Fila mas ocupada
            if (contFila[i] > contFila[filaMayor]){
                filaMayor = i;
            }
        }
        printf("\n");
    }

    //Contador asientos totales y los imprime
    printf("Ocupacion de la sala:\n");
    for (i=0;i<fila;i++){
        for (j=0;j<columna;j++){
            printf("%d ",sala[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Hay %d asientos ocupados.\n", contGlobal);

    //Imprime filas ocupados
    for (i=0;i<fila;i++){
        printf("Fila %d: %d asientos ocupados\n", i+1, contFila[i]);
    }
    //Imprimie columnas ocupadas
    for (j=0;j<columna;j++){
        printf("Columna %d: %d asientos ocupados\n", j+1, contColumna[j]);
    }
    //Imprime la fila con mas asientos ocupados
    printf("La fila con mas asientos ocupados es la %d (%d asientos).\n",
       filaMayor+1, contFila[filaMayor]);

    return 0;
}