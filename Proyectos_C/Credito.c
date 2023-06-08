#include <stdio.h>
#include <stdlib.h>

int main(){
    int ant;
    int sueldo;
    double res;
    puts ("Antiguedad: ");
    scanf(" %d", &ant);
    if (ant>=5){
        puts ("Sueldo: ");
        scanf(" %d", &sueldo);
        res= sueldo * 0.1;
        if(res>=1000){
        printf("Felicidades se aprobo tu credito\n");
    }
    }
    system("Pause");
    return 0;
}
