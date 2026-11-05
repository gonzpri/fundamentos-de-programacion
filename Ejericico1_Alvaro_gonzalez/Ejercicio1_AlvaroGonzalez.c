#include <stdio.h>
#define NUM_PARTICIPANTES 8
#define TIEMPO_MAXIMO 14400

int main(){
    float tiempoSegundos[NUM_PARTICIPANTES];
    int i;
    float tiempoMedio = 0;
    int lecturaCorrecta;
    int contTiemInfMed = 0;
    float mejorTiempo = TIEMPO_MAXIMO;
    int numMejorTiempo = 0;
    float peorTiempo = 0;
    int numPeorTiempo = 0;

    /*Recoger tiempos*/
    for (i=0; i < NUM_PARTICIPANTES; i++){
        do {
            printf("Tiempo del participante %d en segundos ", i+1);
            lecturaCorrecta = scanf("%f", &tiempoSegundos[i]);   
            scanf("%*[^\n]"); scanf("%*c");       
        }while(!lecturaCorrecta || tiempoSegundos[i] <= 0);                 //Control de errores
    }
    printf("\n");

    /*Recorrer arry 1º vez*/
    for (i=0; i < NUM_PARTICIPANTES; i++){
        tiempoMedio = tiempoMedio + tiempoSegundos[i];                      //Suma de tiempo total
        if(tiempoSegundos[i]<mejorTiempo){
            mejorTiempo = tiempoSegundos[i];                              //Guardar mejor tiempo
            numMejorTiempo = i+1;                                         //Guardar posicion mejor tiempo
        }
        if (peorTiempo<tiempoSegundos[i]){
            peorTiempo = tiempoSegundos[i];                                //Guardar peor tiempo
            numPeorTiempo = i+1;                                           //Guardar posicion peor tiempo
        }
    }
    tiempoMedio = tiempoMedio / NUM_PARTICIPANTES;                      //Calcular tiempo medio
    /*Recorrer array 2º vez*/
    for (i=0;i<NUM_PARTICIPANTES;i++){                                  
        if ( tiempoSegundos[i] < tiempoMedio){                          //Solo entran tiempos inferiores al medio
        contTiemInfMed++;                                               //Contador tiempos inferiores al medio
        }
    }

    /*Imprimir resultados*/
    printf("Tiempo medio: %.2f\n",tiempoMedio);                         //Mostrar tiempo medio
    printf("Tiempos inferiores al medio: %d\n",contTiemInfMed);         //Mostrar tiempo inferior al medio
    printf("Tiempo ganador: %.2f, Participante numero: %d.\n",mejorTiempo, numMejorTiempo);       //Mostrar mejor tiempo y participante
    printf("Tiempo perdedor: %.2f, Participante numero: %d.\n",peorTiempo, numPeorTiempo);

return 0;
}