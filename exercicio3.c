#include <stdio.h> //importacao da biblioteca

int main() {
    float n1, p1;
    float n2, p2;
    float n3, p3;
    printf("Digite o primeiro numero e seu peso: ");
    scanf("%f, %f", &n1, &p1);
    
    printf("Digite o segundo numero e seu peso: ");
    scanf("%f, %f", &n2, &p2);

    printf("Digite o terceiro numero e seu peso: ");
    scanf("%f, %f", &n3, &p3);

float media=(n1*p1 + n2*p2 + n3*p3)/(3);
printf("sua media e: %.2f", media);

    return 0;                                  
}