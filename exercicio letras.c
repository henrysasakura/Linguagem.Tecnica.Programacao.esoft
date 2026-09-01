#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char letra;
	printf("insira um letra: \n");
	scanf("%c",&letra);
	
	if(letra == 'a' || letra =='e'|| letra == 'i' || letra == 'o' || letra == 'u'){
		if(letra =='a' || letra == 'o'){
			printf("aoba\n");
		}
		if(letra == 'i' || letra == 'u'){
			printf("LÁ ELE\n");
		}
	}else {
		printf("67\n");
	}
	
	if(letra == 'a')printf("A DE AMOR");
	if(letra == 'b')printf("B DE BAIXIIIIIIINHO");
	if(letra == 'c')printf("C DE CORACAAAO");
	if(letra == 'd')printf("D DE DACIIINHO");
	
	return 0;
}
