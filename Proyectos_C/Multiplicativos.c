#include <stdio.h>
#include <stdlib.h>

void calcular(int matriz[][10], int *multi){
       int i,j;
       for(i=0; i<10; i++){
              for(j=0; j<10; j++){
                    int prod =1; 
                    if (matriz[i][j]!=0){
                     prod=matriz[i][j];
                    }
                    multi[i*10+j]=prod;
              }
       }
}
void matriz(int matriz[][10]){
       int i,j;
       for(i=0; i<10; i++){
              for(j=0; j<10; i++){
                     printf("%3d", matriz[i][j]);
              }
       }
}
int main(void){
       printf(calcular);
       printf(matriz);
}