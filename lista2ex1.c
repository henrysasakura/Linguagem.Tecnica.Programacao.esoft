#include <stdio.h>
#include <math.h> 

int main() {

int idade, ano_atual, ano_nascimento;
    
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
    
    ano_nascimento = ano_atual - idade;
    printf("Ano de nascimento aproximado: %d\n\n", ano_nascimento);


    return 0;
}
