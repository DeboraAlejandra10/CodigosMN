#include <stdio.h>
int main(){
int x=17, y;
int *p;
p=&x;
printf("el valor de x es %p\n", *p);
y=*p+3;
printf("el valor de y es %d\n", y);
}