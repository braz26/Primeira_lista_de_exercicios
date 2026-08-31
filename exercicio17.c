#include <stdio.h>//importacao da biblioteca

int main() {
    float conta_corrente;
    float saque1;
    float saque2;
    float imposto1;
    float imposto2;
    float saldo_final;
    
    printf("Digite o valor da conta corrente: ");
    scanf("%f", &conta_corrente);

    printf("Digite o valor do primeiro saque: ");
    scanf("%f", &saque1);

    printf("Digite o valor do segundo saque: ");
    scanf("%f", &saque2);

    printf("Digite o valor do imposto do primeiro saque: ");
    scanf("%f", &imposto1);

    printf("Digite o valor do imposto do segundo saque: ");
    scanf("%f", &imposto2);

    saldo_final = conta_corrente - (saque1 + imposto1) - (saque2 + imposto2);

    printf("\nO valor correspondente ao saldo final e: %.2f", saldo_final);

    return 0; 
}