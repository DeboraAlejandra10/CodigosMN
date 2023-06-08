#include <stdio.h>
#include <stdlib.h>

int main (){
    // strlen es el equivalente a Lenght en Java
    int len;
    char cad[]="Es una cadena";
    len= strlen(cad);
    printf("La longitud de: \"%s\" es: %d\n", cad, len);
    return 0;
}