#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {

double x1, y1, x2, y2, distancia;
    
    printf("Digite as coordenadas x1 e y1 do ponto p1 (ex: 2 3): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Digite as coordenadas x2 e y2 do ponto p2 (ex: 5 7): ");
    scanf("%lf %lf", &x2, &y2);
    
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Distancia entre p1 e p2: %.4f\n\n", distancia);

	return 0;
}
