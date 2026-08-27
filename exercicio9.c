#include <stdio.h> //importacao da biblioteca
int main() {
    float base;
    float altura;
    scanf("%f", &base);
    scanf("%f", &altura);
    printf("A area do triangulo e: %.2f", (base*altura)/2);
    return 0;
    
}