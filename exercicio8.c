#include <stdio.h> //importacao da biblioteca
int main() {
    float deposito;
    float juros;
    float rendimento;
    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite o valor do juros: ");
    scanf("%f", &juros);
    
    printf("Seu rendimento e:%.2f", rendimento = deposito * juros/100); 
    printf("\nSeu saldo e: %.2f", deposito + rendimento);
return 0;
}
