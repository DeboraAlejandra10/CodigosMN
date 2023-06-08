#include <stdio.h>
#include <stdlib.h>

int main(){
       int n;
       int i;
       int suma=0;

       printf("ingresa n \n");
       scanf("%d", &n);
 
       for (i=1; i<=n; i++){
       //suma+=i;
       suma= suma + i;
       }
        printf("%d. ", suma);
       return 0;
}