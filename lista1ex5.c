#include <stdio.h>
#include <stdlib.h>

int main() {

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

	return 0;
}
