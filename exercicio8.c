#include <stdio.h> //importacao da biblioteca
int main() {
    float deposito;
    float juros;
    float rendimento;
    scanf("%f", &deposito);
    scanf("%f", &juros);
    printf("Seu rendimento e:%.2f", rendimento = deposito * juros/100); 
    printf("\nSeu saldo e: %.2f", deposito + rendimento);
return 0;
}
