#include <stdio.h> // importacao da biblioteca

int main() {
    float preco_fabrica;
    float percent_distribuidor;
    float percent_impostos;

    printf("Digite o preco de fabrica do carro: ");
    scanf("%f", &preco_fabrica);

    printf("Digite o percentual do distribuidor: ");
    scanf("%f", &percent_distribuidor);

    printf("Digite o percentual de impostos: ");
    scanf("%f", &percent_impostos);

 printf("\na) O valor correspondente ao percentual do distribuidor e: %.2f", preco_fabrica * percent_distribuidor);
 printf("\nb) O valor correspondente ao percentual de impostos e: %.2f", preco_fabrica * percent_impostos);
 printf("\nc) O preco final ao consumidor e: %.2f", preco_fabrica + (preco_fabrica * percent_distribuidor) + (preco_fabrica * percent_impostos));
 return 0;

}