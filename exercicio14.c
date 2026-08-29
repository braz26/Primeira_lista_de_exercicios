#include <stdio.h> //importacao da biblioteca

    int calcular_idade(int ano_atual, int ano_nascimento) {
        return ano_atual - ano_nascimento;
    }
    int calcular_idade_em_2050 (int ano_nascimento) {
        return 2050 - ano_nascimento;
    }
    int main() {
        int ano_atual, ano_nascimento;

        printf("Digite o ano atual: ");
        scanf("%d", & ano_atual);
    
        printf("Digite o ano de nascimento: ");
        scanf("%d", & ano_nascimento);

        if (ano_atual< ano_nascimento) {
            printf("Erro: O ano de nascimento nao pode ser maior que o ano atual.\n");
            return 1;
        }
            printf("a)Sua idade atual e: %d\n", calcular_idade(ano_atual, ano_nascimento));
            printf("b) Sua idade em 2050 sera: %d\n", calcular_idade_em_2050(ano_nascimento));
            return 0;
        }
    