#include <stdio.h>
#include <math.h> 

int main() {

double valor_reais, cotacao_dolar, valor_dolares;
    
    printf("Digite o valor em reais (R$): ");
    scanf("%lf", &valor_reais);
    printf("Digite a cotacao do dolar (R$): ");
    scanf("%lf", &cotacao_dolar);
    
    valor_dolares = valor_reais / cotacao_dolar;
    printf("Valor em dolares: $ %.2f\n\n", valor_dolares);

    return 0;
}
