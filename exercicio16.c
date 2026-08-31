#include <stdio.h> // importacao da biblioteca

int main(){
    int horas_trabalhadas;
    float valor_hora;
    float salario_minimo;
    float imposto;
    float salario_bruto;
    float salario_liquido;

    printf("Digite o número de horas trabalhadas: ");
    scanf("%d", &horas_trabalhadas);

    printf("Digite o valor da hora: ");
    scanf("%f", &valor_hora);

    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    salario_bruto = horas_trabalhadas * valor_hora;
    imposto = 0.03f * salario_bruto;
    salario_liquido = salario_bruto - imposto;

    printf("\nO valor corresponde ao salario liquido e: %.2f", salario_liquido);

    return 0;
}