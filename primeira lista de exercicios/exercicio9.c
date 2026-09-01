#include <stdio.h> //importacao da biblioteca
int main() {
    float base;
    float altura;
    
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    printf("A area do triangulo e: %.2f", (base*altura)/2);
    return 0;
    
}