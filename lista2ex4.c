#include <stdio.h>
#include <math.h> 

int main() {

double celsius, fahrenheit;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);
    
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;
    printf("Temperatura em Fahrenheit: %.2f F\n\n", fahrenheit);

    return 0;
}
