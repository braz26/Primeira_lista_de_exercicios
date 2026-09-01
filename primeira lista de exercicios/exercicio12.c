#include <stdio.h> //importacao da biblioteca
#include <math.h> //importacao da biblioteca para funcoes matematicas
int main() {
    float n1,n2;
    printf("Digite dois numeros maiores que zero para realizar a operacao de potencia: ");
    scanf("%f", &n1);
    scanf("%f", &n2);

    if (n1>0 && n2>0) {
        printf("O resultado de um numero elevado ao outro e: %.1f\n", pow(n1,n2));

    } else {
        printf("Os valores devem ser maiores que zero para realizar a operacao de potencia");
        return 0;
    }

    }
