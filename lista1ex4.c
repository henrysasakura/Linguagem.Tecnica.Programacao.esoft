#include <stdio.h>
#include <stdlib.h>

int main() {

    double salario_fixo, total_vendas, total_receber;
    
    printf("Digite o salario fixo do vendedor: ");
    scanf("%lf", &salario_fixo);
    printf("Digite o valor total em vendas efetuadas: ");
    scanf("%lf", &total_vendas);
    
    total_receber = salario_fixo + (total_vendas * 0.15);
    
    printf("TOTAL A RECEBER = R$ %.2f\n\n", total_receber);


	return 0;
}
