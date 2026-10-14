#include <stdio.h>

int main(){
    int  numeros[] = {1, 10, 15, 30, 40, 43};

    //iniciamos i con 0
    //mientras i sea menor que 3
    // aumentamos i + 1 en cada iteraccion con i++

    for  (int i = 0; i < 6; i++) {
        printf("%d\n", numeros[i] * 2);
    }

    return 0;
}