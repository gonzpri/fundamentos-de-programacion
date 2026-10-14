#include <stdio.h>

void sumar(int primero, int segundo) {
    printf("%d\n", primero + segundo);
}

int main(){
    sumar(2,2); //4
    sumar(3,4); //7
    
    return 0;
}