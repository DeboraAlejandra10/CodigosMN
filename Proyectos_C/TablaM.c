#include <stdio.h>
#include <stdlib.h>

int main(){
       int n;
       printf("Ingrese el num\n");
       scanf("%d", &n);

       int* arreglo=malloc(sizeof(int)*15);
       for(int i=0; i<15 ;i++){
       *(arreglo+i)= n* (i + 1);
       }

       printf("Tabla de multiplicar de %d\n",n);
       for(int i=0; i<15 ;i++){
        printf("%d x %d = %d\n", n, i+1, *(arreglo+i));
       }
       free(arreglo);
       return 0;
}