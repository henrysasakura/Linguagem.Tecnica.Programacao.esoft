#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,soma1,soma2,resto1,resto2;
	printf("insira seu cpf:\n");
	scanf("%d %d %d . %d %d %d . %d %d %d - %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10,&n11);
	printf("o cpf inserido %d%d%d.%d%d%d.%d%d%d-%d%d\n",n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11 );
	
	m1 = n1*10;
	m2 = n2*9;
	m3 = n3*8;
	m4 = n4*7;
	m5 = n5*6;
	m6 = n6*5;
	m7 = n7*4;
	m8 = n8*3;
	m9 = n9*2;
	
	soma1 =  m1,m2,m3,m4,m5,m6,m7,m8,m9;
	soma1 *=10;
	resto1 = soma1%11;
	
	printf("%d" ,resto1);

	m1 = n1*11;
	m2 = n2*10;
	m3 = n3*9;
	m4 = n4*8;
	m5 = n5*7;
	m6 = n6*6;
	m7 = n7*5;
	m8 = n8*4;
	m9 = n9*3;
	m10 = n10*2;
	
	soma2 =  m1,m2,m3,m4,m5,m6,m7,m8,m9;
	soma2 *=10;
	resto2 = soma2%11;
	
	printf("\n %d", resto2);
	
	if( n10 == resto1 && n11 == resto2);
	printf("cpf valido");
	else:
		printf("cpf invalido");
	
	return 0;
}
