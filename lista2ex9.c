#include <stdio.h>
#include <math.h> 

int main() {

int tempo_horas, vel_media;
    double distancia, litros;
    
    printf("Digite o tempo gasto na viagem (horas): ");
    scanf("%d", &tempo_horas);
    printf("Digite a velocidade media (km/h): ");
    scanf("%d", &vel_media);
    
    distancia = tempo_horas * vel_media;
    litros = distancia / 12.0; // Autonomia do carro = 12 KM/L
    
    printf("Litros de combustivel gastos: %.3f\n\n", litros);
    
    return 0;
}
