#include <stdio.h>
#include <stdlib.h>

int main() {

int idade_dias;
    int anos, meses, dias;
    
    printf("Digite a idade em dias: ");
    scanf("%d", &idade_dias);
    
    anos = idade_dias / 365;
    int resto_dias = idade_dias % 365;
    
    meses = resto_dias / 30;
    dias = resto_dias % 30;
    
    printf("%d anos\n", anos);
    printf("%d meses\n", meses);
    printf("%d dias\n", dias);
	return 0;
}
