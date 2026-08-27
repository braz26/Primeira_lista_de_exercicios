#include <stdio.h> //importacao da biblioteca

int main() {
    float salario;
    float g= 0.05;
    float i= 0.07;
    scanf("%f", &salario);
printf("Seu novo salario e: %.2f", salario + (salario * g) - (salario * i));

   return 0;
}