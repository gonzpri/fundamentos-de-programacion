#include <stdio.h>

#define cantEnv 5

float peso;
float precio[cantEnv];
int contEnvCaro;
float sumaCosteEnvios;

int calcularCosteEnvio(float peso){
        if(peso<0){
            return 0;
        } else if(10<=peso){
            printf("Precio: %d.\n",18);
            contEnvCaro++;
            sumaCosteEnvios = sumaCosteEnvios + 18;
        } else if(5<=peso){
            printf("Precio: %d.\n",12);
            contEnvCaro++;
            sumaCosteEnvios = sumaCosteEnvios + 12;
        } else if(2<=peso){
            printf("Precio: %d.\n",8);
            sumaCosteEnvios = sumaCosteEnvios + 8;
        }else if(0<=peso){
            printf("Precio: %d.\n",5);
            sumaCosteEnvios = sumaCosteEnvios + 5;
        } else{
        return 0;
        }
}

         
    

int main(){
    int i;
    printf("Introduce el peso para %d envios:\n",cantEnv);
    for(i=0;i<cantEnv;i++){
        scanf("%f",&peso);
        calcularCosteEnvio(peso);
    }
    printf("Envios superiores a 12 EUR\n: %d.\n",contEnvCaro);
    printf("Coste total: %.2f EUR\n",sumaCosteEnvios);
    return 0;
}