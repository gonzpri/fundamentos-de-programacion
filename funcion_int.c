#include <stdio.h>

int multiplicar(int primero, int segundo) {
    return primero * segundo;
}

int main() {
    int resultado = multiplicar(2,3);
    printf("%d\n", resultado); //6 

    return 0;
}