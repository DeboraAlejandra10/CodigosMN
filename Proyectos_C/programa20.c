#include <stdio.h>
#include <stdlib.h>

int main(){
       int n;
       int m;

       for (m=1; m<11; m++) {
        for(n=1; n<11; n++) {
        printf("%d \t", n*m);
        }
        printf("\n");
       }
       return 0;
}