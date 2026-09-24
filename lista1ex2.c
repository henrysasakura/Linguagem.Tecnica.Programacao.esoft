#include <stdio.h>
#include <stdlib.h>

int main() {


    double valor_double;
    
    printf("Digite um valor positivo: ");
    scanf("%lf", &valor_double);
    
    printf("Valor em notacao cientifica: %e\n\n", valor_double);

	return 0;
}
