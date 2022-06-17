#include <stdio.h>

void main()
{
    float leituras[47], mediaMensal;
    int primContador = 0, segContador = 0;

    for (primContador; primContador <= 47; primContador++)
    {
        printf("Digite o valor da leitura %i: ", primContador + 1);
        scanf("%f", &leituras[primContador]);
    }

    for (primContador = 0; primContador <= 11; primContador++)
    {
        mediaMensal = 0;
        mediaMensal = (mediaMensal + leituras[segContador] + leituras[segContador + 1] + leituras[segContador + 2] + leituras[segContador + 3]) / 4;
        segContador = segContador + 4;

        printf("\nMes: %i | Media Mensal: %f\n", primContador + 1, mediaMensal);
    }
}
