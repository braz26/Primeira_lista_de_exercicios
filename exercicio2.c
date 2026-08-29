#include <stdio.h> //importacao da biblioteca

int main() {
    float n1;
    float n2;
    float n3;
    prinf("Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    
    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);
    float media = (n1 + n2 + n3)/3;

    printf("Sua media é: %.2f", media);
    return 0;


}
