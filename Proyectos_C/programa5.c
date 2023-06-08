#include <stdio.h>
#include <stdlib.h>

int main(){
        float hst, ph , sal, sal2;
        printf("Ingresa las horas que trabajaste a la semana: ");
        scanf("%f", &hst);

        printf ("Ingresa precio por hora ");
        scanf("%f", &ph);

        if (hst<=40){
        sal= hst* ph;
        printf("tu salario es de: %f", sal);
        } else {
        sal2=(40*ph + (ph*1.5 *(hst-40)));
         printf("tu salario es de: %f", sal2);
        }
}
