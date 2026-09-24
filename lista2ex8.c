#include <stdio.h>
#include <math.h> 

int main() {

int duracao_segundos;
    int horas, minutos, segundos;
    
    printf("Digite a duracao do evento em segundos: ");
    scanf("%d", &duracao_segundos);
    
    horas = duracao_segundos / 3600;
    int resto_segundos = duracao_segundos % 3600;
    
    minutos = resto_segundos / 60;
    segundos = resto_segundos % 60;
    
    printf("%d:%d:%d\n\n", horas, minutos, segundos);
    
    return 0;
}
