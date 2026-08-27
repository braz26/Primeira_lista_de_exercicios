#include <stdio.h> //importacao da biblioteca
int main() {
    float salario;
    float aumento;
    scanf("%f", &salario);
    scanf("%f", &aumento);
    printf("Seu novo salario e: %.2f", salario * aumento);
    return 0;
}