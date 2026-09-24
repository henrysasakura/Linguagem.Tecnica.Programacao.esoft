#include <stdio.h>
#include <math.h> 

int main() {

int valor_saque;

    printf("Digite o valor para saque: R$ ");
    scanf("%d", &valor_saque);

    printf("\n--- Resumo da entrega de cedulas ---\n");
    printf("Valor solicitado: R$ %d\n\n", valor_saque);

    int resto = valor_saque;

    int notas100 = resto / 100;
    resto = resto % 100;

    int notas50 = resto / 50;
    resto = resto % 50;

    int notas10 = resto / 10;
    resto = resto % 10;

    int notas5 = resto / 5;
    resto = resto % 5;

    int notas2 = resto / 2;
    resto = resto % 2;

    int notas1 = resto / 1;
    resto = resto % 1;

    printf("Notas de R$ 100: %d\n", notas100);
    printf("Notas de R$  50: %d\n", notas50);
    printf("Notas de R$  10: %d\n", notas10);
    printf("Notas de R$   5: %d\n", notas5);
    printf("Notas de R$   2: %d\n", notas2);
    printf("Notas de R$   1: %d\n", notas1);
    
    return 0;
}
