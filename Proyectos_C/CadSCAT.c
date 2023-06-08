#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int len;
    char palabra1[30]; 
    char palabra2[30];
    char concatene[100];
    int n;

    printf("Ingrese la primer palabra: ");
    scanf("%s", palabra1);

    printf("Ingrese la segunda palabra: ");
    scanf("%s", palabra2);

    //conteo de caracteres
    n=strlen(palabra1);

    for(int i=0; i<n; i++){
        strcat(concatene,palabra2);
    }
    printf("la concatenacion es:%s%s\n", palabra1, concatene);

    return 0;
}