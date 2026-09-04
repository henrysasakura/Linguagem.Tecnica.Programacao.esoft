#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int numero1,numero2,negativo1,negativo2;
	
	printf("escreva dois numeros inteiros!\n");
	scanf("%d%d", &numero1, &numero2);
	
	negativo1=-numero1;
	negativo2=-numero2;
	
	printf("os numeros inversos sao %d e %d", negativo1, negativo2);
	
	
	
	return 0;
}
