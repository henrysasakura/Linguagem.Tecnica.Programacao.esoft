#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("digite um numero para a soma \n");
	scanf("%d", &a);
	printf("digite outro valor para soma \n");
	scanf("%d", &b);
	c = a + b;
	printf("a soma de %d +%d = %d\n",a,b, c);
	
	return 0;
}
