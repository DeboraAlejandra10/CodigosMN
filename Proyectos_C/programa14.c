#include <stdio.h>
#include <stdlib.h>

int main(){
       int vector[100];   
       int i=0;
       int b=2;

       while (i<=100){
       vector[i]=i*b;
       i++;
       }
        i=0;
        while(i<100){
       printf("vector[%d]=%d\n",i,vector[i]);
       i++;
        }

       system("Pause");
       return 0;
}
