#include <stdio.h>

int maximo(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;
    
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);
    
    int max = maximo(num1, num2);
    
    printf("El número máximo es: %d\n", max);
    
    return 0;
}
