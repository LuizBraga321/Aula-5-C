#include <stdio.h>

int main()
{
    float nota;
    float soma = 0;
    float media;
    int i;

    for (i = 1; i <= 10; i++)
    {

        do
        {
            printf("Nota do cliente %d (0 a 10): ", i);
            scanf("%f", &nota);

            if (nota < 0 || nota > 10)
                printf("Nota invalida. Digite novamente.\n");

        } while (nota < 0 || nota > 10);

        soma += nota;
    }

    media = soma / 10;

    printf("Media geral: %.2f\n", media);

    if (media < 7)
    {
        printf("Alerta: media de atendimento abaixo de 7.\n");
    }

    return 0;
}