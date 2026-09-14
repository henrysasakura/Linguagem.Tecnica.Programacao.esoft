#include <stdio.h>

int main(){
	
/*	int n1,n2,n3,n4;
	
	printf("insira os 4 numeros: ");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	printf("%d %d %d %d",n4,n2,n1,n3);
	*/
	
	
	float p1,vp1,p_vp;
	printf("insira o preco:");
	scanf("%f", &p1);
	printf("insira o valor patrimonial:");
	scanf("%f", &vp1);
	
	p_vp = vp1/p1*100;
	
	if(p1 > 10 && p_vp > 0.5)
		printf("otima para compra");
		
	if(p1 < 1 && p_vp < 1.0)
		printf("regular / espere");
		
	if(p1 > 5 && p_vp < 1.2)
		printf("ruim / nao compre");
		
	if(p1 < 10 && p_vp > 0.3)
		printf("oportunidade");
		
	if(p1 > 1 && p_vp < 0.7)
		printf("atencao");
	
	
	
	return 0;
}
