#include <stdio.h>

#include <stdio.h>

int main(){
    int i,a,b,tmp,suma;

    printf("Introduce a y b: ");
    scanf("%d %d", &a, &b);

    if (a < 0 || b < 0){
        printf("a y b tienen que ser positivos");
    } else {
        if (b<a){
            tmp = b;
            b = a;
            a = tmp;
        }
        suma = 0;
        for (i=a;i<=b;i++){
            if (i % 5 == 0){
                suma += i;
            }
        }
        printf("La suma de los multiplos de 5 entre %d y %d es %d\n", a, b, suma);    
    }

return 0;
}