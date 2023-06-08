#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
   long cpu_time_used;
    
    // Inicio del tiempo
    start = clock();
    
    // Código con apuntadores
      system("libreoffice --impress");
    int num = 10;
    int *p = &num;
    printf("El valor de num es: %d\n", *p);
    
    // Final del tiempo
    end = clock();
    
    // Cálculo del tiempo transcurrido
    cpu_time_used = ((long) (end - start)*100000) / CLOCKS_PER_SEC;
    
    printf("los ciclos de reloj transcurridos fueron: %ld \n", cpu_time_used);
    
    return 0;
}
