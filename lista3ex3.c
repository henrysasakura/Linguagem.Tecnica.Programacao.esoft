#include <stdio.h>


double calcularINSS(double salario_bruto) {
    double desconto;

    if (salario_bruto <= 1412.00) {
        desconto = salario_bruto * 0.075; 
        
    } else if (salario_bruto <= 2666.68) {
        desconto = salario_bruto * 0.09;
        
    } else if (salario_bruto <= 4000.03) {
        desconto = salario_bruto * 0.12;
        
    } else {
        desconto = salario_bruto * 0.14; 
        
    }

    return desconto;
}

int main() {
    double salario, desconto_inss, salario_liquido;

    printf("=== CALCULO DE INSS ===\n\n");
    printf("Digite o valor do salario bruto: R$ ");
    scanf("%lf", &salario);

    desconto_inss = calcularINSS(salario);
    salario_liquido = salario - desconto_inss;

    printf("\n--- RESUMO DO DESCONTO ---\n");
    printf("Salario Bruto  : R$ %.2f\n", salario);
    printf("Desconto INSS  : R$ %.2f\n", desconto_inss);
    printf("Salario Liquido: R$ %.2f\n", salario_liquido);
    printf("==========================\n");

    return 0;
}
