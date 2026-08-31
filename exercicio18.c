#include <stdio.h> // importacao da biblioteca

int main() {
    float peso_saco;
    float peso_pote1;
    float peso_pote2;

    printf("Digite o peso do saco de racao, em gramas: ");
    scanf("%f", &peso_saco);

    printf("Digite o peso do pote 1, apos colocar a racao, em gramas: ");
    scanf("%f", &peso_pote1);

    printf("Digite o peso do pote 2, apos colocar a racao, em gramas: ");
    scanf("%f", &peso_pote2);

    if(((peso_pote1 + peso_pote2)*5) < peso_saco){
        printf("\n O peso restante do saco de racao e: %.2f gramas", peso_saco - (5*(peso_pote1 + peso_pote2)));
    }

    return 0;
}