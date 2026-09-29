#include <stdio.h>

int main()
{
    float moeda;
    float total = 0;
    char continuar;

    do
    {
        printf("Digite a moeda (0.50, 1.00 ou 2.00): R$ ");
        scanf("%f", &moeda);

        if (moeda == 0.50 || moeda == 1.00 || moeda == 2.00)
        {
            total += moeda;
        }
        else
        {
            printf("Moeda invalida.\n");
        }

        printf("Deseja adicionar outra moeda? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("Total acumulado: R$ %.2f\n", total);

    return 0;
}