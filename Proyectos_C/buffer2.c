#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,x;
    printf("Dame el tamaño del arreglo: ");
    scanf("%d", &x);
    char* buffer= malloc(x*sizeof(char));
    
    printf("Ingresa los valores del arreglos: ");
    for(i=0;i<=x;i++){
        scanf("%c", buffer+i);
    }

    printf("los valores del arreglo son: ");
    for(int i=0; i<=x; i++){
        printf("%c\t", *(buffer+i));
    }

    free(buffer);
    return 0;
}
