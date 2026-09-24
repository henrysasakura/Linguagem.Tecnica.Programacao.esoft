#include <stdio.h>
#include <stdlib.h>
#define pi 3.141597
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float r, area;
	
	printf("Insira o raio R do circulo:\n");
	scanf("%f",&r);
	
	area = pi *(r*r);	
	
	printf("A area do circulo de raio R %f = %f", r, area);
	return 0;
}
