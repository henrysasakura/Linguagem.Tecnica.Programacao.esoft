#include <stdio.h>
#include <math.h> 

int main() {
    printf("=== LISTA DE EXERCICIOS 1 ===\n\n");


    printf("--- Exercicio 1 ---\n");
    int num1, num2;
    
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    printf("Valores na ordem inversa: %d e %d\n\n", num2, num1);

    printf("--- Exercicio 2 ---\n");
    double valor_double;
    
    printf("Digite um valor positivo (ex: 1234.56): ");
    scanf("%lf", &valor_double);
    
    printf("Valor em notacao cientifica: %e\n\n", valor_double);


    printf("--- Exercicio 3 ---\n");
    int n;
    
    printf("Digite um numero n (positivo e <= 64): ");
    scanf("%d", &n);
    
    if (n < 0 || n > 64) {
        printf("Valor fora do intervalo permitido [0, 64].\n\n");
    } else if (n == 0) {
        printf("Valor em binario: 0\n\n");
    } else {
        printf("Valor em binario: ");
  
        int i;
        int flag_inicio = 0; 
        
        for (i = 7; i >= 0; i--) {
            int bit = (n >> i) & 1;
            if (bit == 1) {
                flag_inicio = 1;
            }
            if (flag_inicio) {
                printf("%d", bit);
            }
        }
        printf("\n\n");
    }


    printf("--- Exercicio 4 ---\n");
    double salario_fixo, total_vendas, total_receber;
    
    printf("Digite o salario fixo do vendedor: ");
    scanf("%lf", &salario_fixo);
    printf("Digite o valor total em vendas efetuadas: ");
    scanf("%lf", &total_vendas);
    
    total_receber = salario_fixo + (total_vendas * 0.15);
    
    printf("TOTAL A RECEBER = R$ %.2f\n\n", total_receber);


    printf("--- Exercicio 5 ---\n");
    double v1, v2, v3, v4;
    double soma, media, produtorio;
    
    printf("Digite 4 valores (separados por espaco): ");
    scanf("%lf %lf %lf %lf", &v1, &v2, &v3, &v4);
    
    soma = v1 + v2 + v3 + v4;
    media = soma / 4.0;
    produtorio = v1 * v2 * v3 * v4;
    
    printf("Soma: %.2f\n", soma);
    printf("Media: %.2f\n", media);
    printf("Produtorio: %.2f\n\n", produtorio);


    printf("--- Exercicio 6 ---\n");
    int idade_dias;
    int anos, meses, dias;
    
    printf("Digite a idade em dias: ");
    scanf("%d", &idade_dias);
    
    anos = idade_dias / 365;
    int resto_dias = idade_dias % 365;
    
    meses = resto_dias / 30;
    dias = resto_dias % 30;
    
    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n\n", dias);


    printf("--- Exercicio 7 ---\n");
    double raio, volume;
    const double PI = 3.14159;
    
    printf("Digite o valor do raio (R) da esfera: ");
    scanf("%lf", &raio);
    

    volume = (4.0 / 3.0) * PI * (raio * raio * raio);
    
    printf("VOLUME = %.3f\n\n", volume);


    printf("--- Exercicio 8 ---\n");
    double x1, y1, x2, y2, distancia;
    
    printf("Digite as coordenadas x1 e y1 do ponto p1 (ex: 2 3): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Digite as coordenadas x2 e y2 do ponto p2 (ex: 5 7): ");
    scanf("%lf %lf", &x2, &y2);
    
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Distancia entre p1 e p2: %.4f\n\n", distancia);

    printf("=== FIM DOS EXERCICIOS ===\n");
    return 0;
}
