#include <stdio.h> //importacao da biblioteca
int main() {
    float pi;
    float raio;
    scanf("%f", &pi);
    scanf("%f", &raio);
    printf("A area do circulo e: %.2f", pi * (raio*raio));
    return 0;
}