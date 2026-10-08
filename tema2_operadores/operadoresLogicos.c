#include <stdio.h>

int main() {

    //Operador Y
    printf("%d\n", 1 && 1); //1
    printf("%d\n", 1 && 0); //0
    printf("%d\n", 0 && 1); //0
    printf("%d\n", 0 && 0); //0


    printf("%d\n", 1 || 1); //1
    printf("%d\n", 1 || 0); //1
    printf("%d\n", 0 || 1); //1
    printf("%d\n", 0 || 0); //0
}