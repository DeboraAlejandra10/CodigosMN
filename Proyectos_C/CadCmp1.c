#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int com;
    char palabra1[30]; 
    char palabra2[30];

    printf("Ingrese la primer palabra: ");
    scanf("%s", palabra1);

    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);

    com=strcmp(palabra1, palabra2);

    if (com==0){
        printf("Ambas son iguales, es %d \n", com);
    } else if (com<0) {
       printf("La palabra1 %s es menor que la palabra2 %s, es %d ", palabra1, palabra2, com);
    } else if (com>0){
         printf("La palabra2 %s es menor que la palabra1 %s, es %d \n", palabra2, palabra1, com);
    }
    return 0;
}
