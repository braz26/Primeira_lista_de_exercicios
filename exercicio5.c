#include <stdio.h> //importacao da biblioteca
int main() {
    float salario;
    float aumento;
    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &aumento);
    
    printf("Seu novo salario e: %.2f", salario * aumento);
    return 0;
}