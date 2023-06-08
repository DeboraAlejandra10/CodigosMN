#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char pal[100];
    int len;
    printf("Indroduce una palabra \n");
    scanf("%s", pal);
    len=strlen(pal);
    printf("la longitud es: %d \n", len);

    for(int i=0;i<len;i++){      /*solo imprime columnas hasta que se 
                                complete lo de abajo aumenta lo de arriba*/
        for(int j=0;j<len; j++){  //imprime filas  
            printf("*");        /*primero imprime  ****, salta la linea 
                                e imprime de nuevo **** */
        } 
       printf("\n");
    }
    return 0;
}
