#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int a,b,r,r2;
	printf("entre com os valores do problema: ");
	scanf("%d %d", &a ,&b);
	
	if(a>0 && b>0){
		if(a%2 == 0){
			if(b%2 == 0){
				printf("sao multiplos de 2");
			}
		}
		if(a>b){
			if(a%b == 0){
			printf("sao multiplos entre si");
		}else{
			if(b>a){
				if(b%a == 0){
					printf("sao multiplos entre si");
				}
			
			}
		}
	}
		
		
	}else {
		
		
	}
	
	
	
	
	return 0;
}
