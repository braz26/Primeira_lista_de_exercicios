#include <stdio.h> //importacao da biblioteca
 int main() {
    float salario_base;
    float gratificacao= 50;
    float imposto= 0.1;

    printf("Digite seu salario base: ");
    scanf("%f", &salario_base);
    
    printf("Seu salario a receber e: %.2f", salario_base + gratificacao - (salario_base * imposto));
    
    return 0;

 }