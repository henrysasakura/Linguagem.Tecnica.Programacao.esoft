#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

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
    printf("=== LISTA DE EXERCICIOS 3 ===\n\n");

    printf("--- Exercicio 01 ---\n");
    int valor_saque;

    printf("Digite o valor para saque: R$ ");
    scanf("%d", &valor_saque);

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

    printf("\n--- Resumo da entrega de cedulas ---\n");
    printf("Valor solicitado: R$ %d\n", valor_saque);
    printf("Notas de R$ 100: %d\n", notas100);
    printf("Notas de R$  50: %d\n", notas50);
    printf("Notas de R$  10: %d\n", notas10);
    printf("Notas de R$   5: %d\n", notas5);
    printf("Notas de R$   2: %d\n", notas2);
    printf("Notas de R$   1: %d\n\n", notas1);

    printf("--- Exercicio 02 ---\n");
    double v0, angulo_graus;
    const double g = 9.8;
    const double k = 0.5;
    const double dt = 0.01;

    printf("Digite a velocidade inicial (v0 em m/s): ");
    scanf("%lf", &v0);
    printf("Digite o angulo de lancamento (em graus): ");
    scanf("%lf", &angulo_graus);

    double rad = angulo_graus * (PI / 180.0);
    double vx = v0 * cos(rad);
    double vy = v0 * sin(rad);
    double x = 0.0;
    double y = 0.0;
    double t = 0.0;

    while (t == 0.0 || y > 0.0) {
        double ax = -k * vx;
        double ay = -g - k * vy;

        vx += ax * dt;
        vy += ay * dt;

        x += vx * dt;
        y += vy * dt;

        t += dt;
    }

    printf("\n--- RESULTADOS DA SIMULACAO ---\n");
    printf("Alcance Maximo (x): %.2f metros\n", x);
    printf("Tempo de Voo (t):    %.2f segundos\n\n", t);

    printf("--- Exercicio 03 ---\n");
    double salario_bruto_e7, desconto_inss_e7, salario_liquido_e7;

    printf("Digite o valor do salario bruto: R$ ");
    scanf("%lf", &salario_bruto_e7);

    desconto_inss_e7 = calcularINSS(salario_bruto_e7);
    salario_liquido_e7 = salario_bruto_e7 - desconto_inss_e7;

    printf("\n--- RESUMO DO DESCONTO ---\n");
    printf("Salario Bruto  : R$ %.2f\n", salario_bruto_e7);
    printf("Desconto INSS  : R$ %.2f\n", desconto_inss_e7);
    printf("Salario Liquido: R$ %.2f\n\n", salario_liquido_e7);

    printf("--- Exercicio 04 ---\n");
    double salario_bruto_e8, desconto_inss_e8, salario_base_e8, desconto_irpf_e8, salario_liquido_e8;

    printf("Digite o salario bruto: R$ ");
    scanf("%lf", &salario_bruto_e8);

    desconto_inss_e8 = calcularINSS(salario_bruto_e8);
    salario_base_e8 = salario_bruto_e8 - desconto_inss_e8;
    desconto_irpf_e8 = calcularIRPF(salario_base_e8);
    salario_liquido_e8 = salario_base_e8 - desconto_irpf_e8;

    printf("\n--- RESUMO DA FOLHA DE PAGAMENTO ---\n");
    printf("Salario Bruto   : R$ %.2f\n", salario_bruto_e8);
    printf("Desconto INSS   : R$ %.2f\n", desconto_inss_e8);
    printf("Salario Base    : R$ %.2f\n", salario_base_e8);
    printf("Desconto IRPF   : R$ %.2f\n", desconto_irpf_e8);
    printf("------------------------------------\n");
    printf("Salario Liquido : R$ %.2f\n\n", salario_liquido_e8);

    printf("--- Exercicio 05 ---\n");
    double valor_hora, quantidade_horas;
    double salario_bruto_e9, desconto_inss_e9, salario_base_e9, desconto_irpf_e9, salario_liquido_e9;

    printf("Digite o valor da hora trabalhada (R$): ");
    scanf("%lf", &valor_hora);
    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%lf", &quantidade_horas);

    salario_bruto_e9 = valor_hora * quantidade_horas;
    desconto_inss_e9 = calcularINSS(salario_bruto_e9);
    salario_base_e9 = salario_bruto_e9 - desconto_inss_e9;
    desconto_irpf_e9 = calcularIRPF(salario_base_e9);
    salario_liquido_e9 = salario_base_e9 - desconto_irpf_e9;

    printf("\n======================================================\n");
    printf("    RECIBO DE PAGAMENTO DE SALARIO (CONTRA-CHEQUE)\n");
    printf("======================================================\n");
    printf(" Salario Bruto (Horas x Valor):   R$ %10.2f\n", salario_bruto_e9);
    printf(" (-) Desconto INSS:               R$ %10.2f\n", desconto_inss_e9);
    printf(" (-) Desconto IRPF:               R$ %10.2f\n", desconto_irpf_e9);
    printf("------------------------------------------------------\n");
    printf(" LIQUIDO A RECEBER:               R$ %10.2f\n", salario_liquido_e9);
    printf("======================================================\n\n");

    printf("=== FIM DOS EXERCICIOS ===\n");
    return 0;
}
