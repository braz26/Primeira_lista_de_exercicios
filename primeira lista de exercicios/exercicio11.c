#include <stdio.h> //importacao da biblioteca
#include <math.h> //importacao da biblioteca para funcoes matematicas
int main() {
    float n1;
    scanf("%f", &n1);
    if (n1>0) {
        printf("o numero ao quadrado e: %.1f", n1*n1);
    }
    if (n1>0) {
        printf("\no numero ao cubo e: %.1f", n1*n1*n1);
    }
    if (n1>0)
     printf("\na raiz quadrada do numero e: %.2f", sqrt(n1));

    if (n1>0)
        printf("\na raiz cubica do numero e: %.2f", cbrt(n1));

    }