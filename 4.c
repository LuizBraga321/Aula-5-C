#include <stdio.h>

int main()
{
    int passos;
    int total = 0;
    int horas = 0;

    while (total < 10000)
    {

        do
        {
            printf("Passos dados na hora %d: ", horas + 1);
            scanf("%d", &passos);

            if (passos < 0)
                printf("Quantidade invalida.\n");

        } while (passos < 0);

        total += passos;
        horas++;

        printf("Total atual: %d passos\n", total);
    }

    printf("\nMeta atingida!\n");
    printf("Foram necessarias %d hora(s).\n", horas);

    return 0;
}