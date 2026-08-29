#include <stdio.h> //importacao da biblioteca

int main() {
    float n1;
    float a2=0.25;
    printf("Digite seu salario: ");
    scanf("%f", &n1);
    
printf("Seu novo salario e: %.2f", n1 + (n1 * a2));

    return 0;
}
