#include <stdio.h>
#include <math.h> 

int main() {

const double premio_total = 780000.00;
    double g1, g2, g3;
    
    g1 = premio_total * 0.46; 
    g2 = premio_total * 0.32; 
    g3 = premio_total - (g1 + g2); 
    
    printf("Primeiro ganhador (46%%): R$ %.2f\n", g1);
    printf("Segundo ganhador (32%%): R$ %.2f\n", g2);
    printf("Terceiro ganhador (restante): R$ %.2f\n\n", g3);
    
    return 0;
}
