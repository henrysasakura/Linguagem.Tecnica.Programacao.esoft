#include <stdio.h>
#include <stdlib.h>

int main() {


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


	return 0;
}
