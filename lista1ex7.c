#include <stdio.h>
#include <stdlib.h>

int main() {

double raio, volume;
    const double PI = 3.14159;
    
    printf("Digite o valor do raio (R) da esfera: ");
    scanf("%lf", &raio);
    
    volume = (4.0 / 3.0) * PI * (raio * raio * raio);
    
    printf("VOLUME = %.3f\n\n", volume);
	return 0;
}
