#include <stdio.h>
#include <stdlib.h>

int main (){
    //Cadenas: Arreglo de caracteres
    //Para declararla hay que crearla como arreglo
    char cad[10];
    int i;
    printf("Introduce una palabra: \n");
    scanf("%s", cad);
    //Imprime la palabra
    printf("%s", cad);
    return 0;
}