#include <stdio.h>

int n, n1;
int c1[100], c2[100], c3[100];

int main(int argc, char const *argv[])
{
    char option;

    printf("Qual programa deseja executar? ('A' ou 'B') ");
    scanf("%c", &option);

    switch (option)
    {
    case 'A':

        inputs();
        intersec();
        break;

    case 'B':
        inputs2();
        break;

    default:
        printf("Nenhum programa foi selecionado. ");
        break;
    }

    return 0;
}

void inputs()
{
    printf("Tamanho do conjunto 1: ");
    scanf("%i", &n);
    c1[0] = n;

    for (int i = 1; i <= n; i++)
    {
        printf("Insira o elemento [%i] de C1. ", i);
        scanf("%i", &c1[i]);
    }

    printf("Tamanho do conjunto 2: ");
    scanf("%i", &n1);
    c2[0] = n;

    for (int i = 1; i <= n1; i++)
    {
        printf("Insira o elemento [%i] de C2. ", i);
        scanf("%i", &c2[i]);
    }
}

void intersec()
{
    printf("\nIntersec = ");

    for (int i = 1; i <= n; i++)
    {
        int temp = c1[i];

        for (int j = 0; j <= n1; j++)
        {
            if (c2[j] == temp)
            {
                c3[i] = temp;
                printf("%i ", c3[i]);
            }
        }
    }
}

void inputs2()
{
    int qt;

    printf("Qual a quantidade de conjuntos? ");
    scanf("%i", &qt);

    printf("Qual o tamanho do conjunto C1? ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("Insira o elemento %i de C1. ", i);
        scanf("%i", &c1[i]);
    }

    /*for (int p = 0; p <= n; p++)
        printf("%i", c1[p]);*/

    for (int j = 2; j <= qt; j++)
    {
        printf("\nQual o tamanho de C%i? ", j);
        scanf("%i", &n1);

        for (int k = 1; k <= n1; k++)
        {
            printf("Insira o elemento %i de C%i. ", k, j);
            scanf("%i", &c2[k]);
        }

        /*printf("\nvetor = ");
        for (int p = 0; p <= n1; p++)
            printf("%i ", c2[p]);*/

       intersec();
    }
}
