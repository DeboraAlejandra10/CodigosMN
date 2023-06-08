#include <stdio.h>
#include <stdlib.h>

int main (){
    //descomponemos las fracciones (numeradores y denominadores)
    // Fraccion 1
    double n1= 1;
    double n2= 3;
    double n3= 5;
    double n4= 30;
    double n5= 23;
    double x;
   //Fraccion 2
    double v1= 2;
    double v2= 4;
    double y;

   //Acomodar la fraccion 1 y hacemos la oper. por orden 
    x= ((n1/n2) + (n2/n3) + (n1/n4) / (n5/n4));
    printf("Resultado:  %f \n",x);

    //Fraccion 2
    y= (n3 + (v1/ (n1/ (n1+ (v1/ (v1- (n1/v2)))))));
    printf("Resultado:  %f \n",y);

    system ("Pause");
    return 0;
}