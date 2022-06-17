#include <stdio.h>

void main(void)
{
    char teatro[5][9];
    int qtdIng_C = 0, qtdIng_E = 0, qtdIng_I = 0;
    float lucroIng_C = 0, lucroIng_E = 0, lucroIng_I = 0, valorIng_C = 0, totalFaturado = 0;

    printf("Digite o valor do ingresso Comum: R$");
    scanf(" %f", &valorIng_C);

    for (int linha = 0; linha <= 5; linha++)
    {
        for (int coluna = 0; coluna <= 9; coluna++)
        {
            printf("Digite tipo do %i ingresso: ", coluna + 1 );
            scanf(" %c", &teatro[linha][coluna]);
        }
    }

    for (int linha = 0; linha <= 5; linha++)
    {
        for (int coluna = 0; coluna <= 9; coluna++)
        {
            if (teatro[linha][coluna] ==  'C')
            {
                qtdIng_C = qtdIng_C + 1;
                lucroIng_C = lucroIng_C + valorIng_C;
            }

            if (teatro[linha][coluna] == 'E')
            {
                qtdIng_E = qtdIng_E + 1;
                lucroIng_E = lucroIng_E + valorIng_C * 0.85;
            }

            if (teatro[linha][coluna] == 'I')
            {
                qtdIng_I = qtdIng_I + 1;
                lucroIng_I = lucroIng_I + valorIng_C * 0.75;
            }
        }
    }

    totalFaturado = totalFaturado + lucroIng_I + lucroIng_C + lucroIng_E;

    printf("\nQuantidade de ingressos do tipo C vendidos: %i | Valor obtido com a venda de ingressos do tipo C: R$%.2f\n", qtdIng_C, lucroIng_C);
    printf("\nQuantidade de ingressos do tipo E vendidos: %i | Valor obtido com a venda de ingressos do tipo E: R$%.2f\n", qtdIng_E, lucroIng_E);
    printf("\nQuantidade de ingressos do tipo I vendidos: %i | Valor obtido com a venda de ingressos do tipo I: R$%.2f\n", qtdIng_I, lucroIng_I);
    printf("\nValor total faturado com a venda de todos os ingressos: %f\n", qtdIng_C, lucroIng_C);
}
