#include <stdio.h>
#include <stdlib.h>

int main(){
        int desc=10;
        int descCliente=20;
        int cliente=0;
        int z=0;

        z= (cliente) ? descCliente : desc;
        printf("El descuento es de %d  \n", z);

        printf("Fin del programa\n");
        system("Pause");
        return 0;
}