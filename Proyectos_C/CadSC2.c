#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int len;
    char palabra1[30]; 
    char palabra2[30];
    char temp[30];
    printf("Ingrese la primer palabra");
    scanf("%s", palabra1);
    printf("Ingrese la segunda palabra");
    scanf("%s", palabra2);

    printf("Antes del intrercambio\n");
    printf("Palabra1: %s\n", palabra1);
    printf("Palabra2: %s\n", palabra2);
    
    strcpy(temp, palabra1);
    strcpy(palabra1, palabra2);
    strcpy(palabra2, temp);

    printf("Despues del intrercambio\n");
    printf("Palabra1: %s\n", palabra1);
    printf("Palabra2: %s\n", palabra2);
    
 return 0;
}