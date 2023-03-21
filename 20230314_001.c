#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int qt;
    int *desvio, *media;

    printf("Insira a quantidade de alunos. ");
    scanf("%i", &qt);

    int *v = (int *)malloc(qt * sizeof(int));

    for (int i = 0; i < qt; i++)
    {
        printf("Insira a nota do aluno %i. ", i);
        scanf("%i", &*(v + i));
        // printf("%i ", *(v+i));
    }

    mediaDesvio(qt, v, desvio, media);

    return 0;
}

int mediaDesvio(int qt, int *v, int *desvio, int *media)
{
    int sum = 0;

    for (int i = 0; i < qt; i++)
    {
        sum += *(v + i);
    }
    *media = sum / qt;
    
    for (int i = 0; i < qt; i++)
    {
        *desvio += (*(v + i) - *media)/qt;

        printf("%i ", *desvio);
    }
}
