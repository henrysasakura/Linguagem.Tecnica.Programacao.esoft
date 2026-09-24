#include <stdio.h>

double calcularINSS(double salario_bruto) {
    if (salario_bruto <= 1412.00) {
        return salario_bruto * 0.075;
    } else if (salario_bruto <= 2666.68) {
        return salario_bruto * 0.09;
    } else if (salario_bruto <= 4000.03) {
        return salario_bruto * 0.12;
    } else {
        return salario_bruto * 0.14;
    }
}

double calcularIRPF(double salario_base) {
    double imposto = 0.0;

    if (salario_base <= 2259.20) {
        imposto = 0.0; 
    } else if (salario_base <= 2826.65) {
        imposto = (salario_base * 0.075) - 169.44;
    } else if (salario_base <= 3751.05) {
        imposto = (salario_base * 0.15) - 381.44;
    } else if (salario_base <= 4664.68) {
        imposto = (salario_base * 0.225) - 662.77;
    } else {
        imposto = (salario_base * 0.275) - 896.00;
    }

    if (imposto < 0.0) {
        imposto = 0.0;
    }

    return imposto;
}

int main() {
    double valor_hora, quantidade_horas;
    double salario_bruto, desconto_inss, salario_base, desconto_irpf, salario_liquido;

    printf("=== EMISSAO DE CONTRA-CHEQUE ===\n\n");

    printf("Digite o valor da hora trabalhada (R$): ");
    scanf("%lf", &valor_hora);
    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%lf", &quantidade_horas);

    salario_bruto = valor_hora * quantidade_horas;

    desconto_inss = calcularINSS(salario_bruto);

    salario_base = salario_bruto - desconto_inss;
    desconto_irpf = calcularIRPF(salario_base);

    salario_liquido = salario_base - desconto_irpf;

    printf("\n======================================================\n");
    printf("    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
    printf("======================================================\n");
    printf(" Salario Bruto (Horas x Valor):   R$ %10.2f\n", salario_bruto);
    printf(" (-) Desconto INSS:               R$ %10.2f\n", desconto_inss);
    printf(" (-) Desconto IRPF:               R$ %10.2f\n", desconto_irpf);
    printf("------------------------------------------------------\n");
    printf(" LIQUIDO A RECEBER:               R$ %10.2f\n", salario_liquido);
    printf("======================================================\n");

    return 0;
}
