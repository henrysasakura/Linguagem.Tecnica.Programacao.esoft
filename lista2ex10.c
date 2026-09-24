#include <stdio.h>
#include <math.h> 

int main() {

int a, b, c;
    
    printf("Digite tres valores inteiros (separados por espaco): ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Fórmula MaiorAB = (a + b + abs(a - b)) / 2
    int maior_ab = (a + b + abs(a - b)) / 2;
    int maior_final = (maior_ab + c + abs(maior_ab - c)) / 2;
    
    printf("%d eh o maior\n\n", maior_final);
    
    return 0;
}
