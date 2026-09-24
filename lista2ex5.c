#include <stdio.h>
#include <math.h> 

int main() {

double graus, radianos;
    const double PI = 3.141592;
    
    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);
    
    radianos = graus * PI / 180.0;
    printf("Angulo em radianos: %.6f rad\n\n", radianos);

    return 0;
}
