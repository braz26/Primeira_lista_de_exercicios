#include <stdio.h> //importacao da biblioteca
#include <math.h> //importacao da biblioteca para funcoes matematicas
int main() {
    int pe= 12; // polegadas
    int jarda= 3; // pes
    int milha= 1760; // jardas
    scanf("%d", &pe);
    scanf("%d", &jarda);
    scanf("%d", &milha);
    printf("O valor em polegadas e: %d", pe*12);
    printf("\nO valor em jardas e: %d", jarda*3);
    printf("\nO valor em milhas e: %d", milha*1760);
    return 0;
    
}