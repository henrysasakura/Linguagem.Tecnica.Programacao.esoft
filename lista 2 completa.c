#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main() {
    printf("=== LISTA DE EXERCICIOS DE LINGUAGEM C (LISTA 02) ===\n\n");

    printf("--- Exercicio 1 ---\n");
    int idade, ano_atual, ano_nascimento;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    
    ano_nascimento = ano_atual - idade;
    printf("Ano de nascimento aproximado: %d\n\n", ano_nascimento);


    printf("--- Exercicio 2 ---\n");
    double velocidade_kmh, velocidade_ms;
    
    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &velocidade_kmh);
    
    // M = K / 3.6
    velocidade_ms = velocidade_kmh / 3.6;
    printf("Velocidade em m/s: %.2f m/s\n\n", velocidade_ms);

    printf("--- Exercicio 3 ---\n");
    double valor_reais, cotacao_dolar, valor_dolares;
    
    printf("Digite o valor em reais (R$): ");
    scanf("%lf", &valor_reais);
    printf("Digite a cotacao do dolar (R$): ");
    scanf("%lf", &cotacao_dolar);
    
    valor_dolares = valor_reais / cotacao_dolar;
    printf("Valor em dolares: $ %.2f\n\n", valor_dolares);


    printf("--- Exercicio 4 ---\n");
    double celsius, fahrenheit;
    
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &celsius);
    
    fahrenheit = celsius * (9.0 / 5.0) + 32.0;
    printf("Temperatura em Fahrenheit: %.2f F\n\n", fahrenheit);


    printf("--- Exercicio 5 ---\n");
    double graus, radianos;
    const double PI = 3.141592;
    
    printf("Digite o angulo em graus: ");
    scanf("%lf", &graus);

    radianos = graus * PI / 180.0;
    printf("Angulo em radianos: %.6f rad\n\n", radianos);

    printf("--- Exercicio 6 ---\n");
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("Antecessor: %d\n", numero - 1);
    printf("Sucessor: %d\n\n", numero + 1);

    printf("--- Exercicio 7 ---\n");
    const double premio_total = 780000.00;
    double g1, g2, g3;
    
    g1 = premio_total * 0.46;
    g2 = premio_total * 0.32;
    g3 = premio_total - (g1 + g2);
    
    printf("Primeiro ganhador (46%%): R$ %.2f\n", g1);
    printf("Segundo ganhador (32%%): R$ %.2f\n", g2);
    printf("Terceiro ganhador (restante): R$ %.2f\n\n", g3);

    printf("--- Exercicio 8 ---\n");
    int duracao_segundos;
    int horas, minutos, segundos;
    
    printf("Digite a duracao do evento em segundos: ");
    scanf("%d", &duracao_segundos);
    
    horas = duracao_segundos / 3600;
    int resto_segundos = duracao_segundos % 3600;
    
    minutos = resto_segundos / 60;
    segundos = resto_segundos % 60;
    
    printf("%d:%d:%d\n\n", horas, minutos, segundos);

    printf("--- Exercicio 9 ---\n");
    int tempo_horas, vel_media;
    double distancia, litros;
    
    printf("Digite o tempo gasto na viagem (horas): ");
    scanf("%d", &tempo_horas);
    printf("Digite a velocidade media (km/h): ");
    scanf("%d", &vel_media);
    
    distancia = tempo_horas * vel_media;
    litros = distancia / 12.0; 
    
    printf("Litros de combustivel gastos: %.3f\n\n", litros);

    printf("--- Exercicio 10 ---\n");
    int a, b, c;
    
    printf("Digite tres valores inteiros (separados por espaco): ");
    scanf("%d %d %d", &a, &b, &c);
    
    int maior_ab = (a + b + abs(a - b)) / 2;
    int maior_final = (maior_ab + c + abs(maior_ab - c)) / 2;
    
    printf("%d eh o maior\n\n", maior_final);

    printf("=== FIM DOS EXERCICIOS ===\n");
    return 0;
}
