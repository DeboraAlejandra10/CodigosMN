#include <stdio.h>
#include <stdlib.h>
//necesitaremos esta libreria para hacer uso de las funciones trigonometricas
#include <math.h>
#define PI 3.14159265

int main (){
    //declarar elementos que vamos a necesitar
    double ang= 45;
    double co;
    double ca;
    double at;
    double ac;

    //para sacar necesitamos saber co ca
    co= sin(ang*PI/180)*100;
    printf("Resultado de la dim.co: %.3f \n",co);
    ca= cos(ang*PI/180)*100;
    printf("Resultado de la dim.ca: %.3f \n",ca);

     //Operaciones e imp. del resu.de areas de las fg
    at= ((co*ca)/2);
    printf("Resultado del a del triangulo: %.3f \n",at);
    ac= (at/2);
    printf("Resultado del a del cuadrado: %.3f \n",ac);
} 