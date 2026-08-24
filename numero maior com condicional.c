#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
/*	int a,b,c,resultado1,resultado2;
	
	printf("insira tres valores:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	if (a<b){
		
		resultado1 = b;
		
	} else {
		
		resultado1 = a;
		
	}
	if (resultado1<c){
		
		resultado2 = c;
		
	}else {
		
		resultado2 = resultado1;
		
	}
	
	printf("o maior numero e o %d", resultado2);*/
	
	int a,b,c,maior_temp,maior;
	printf("insira os tres valores:");
	scanf("%d %d %d",&a ,&b ,&c);
	if(a>b && a>c){
		printf("o maior numero e o %d", a);
	}
	if (b>a && b>c);{
	printf("o maior numero e o %d", b);
	}
	if (c>a && c>b){
		printf("o maior numero e o %d", c);
	}
	
	
	
	
	
	
	
	return 0;
}
