#include <stdio.h>

int main(int argc, char const *argv[])
{

    inputs();

    return 0;
}

int inputs()
{
    int size;

    printf("Insira o tamanho do vetor. ");
    scanf("%i", &size);

    int v[size];

    for (int i = 0; i < size; i++)
    {
        printf("Insira o elemento [%i]. ", i);
        scanf("%i", &v[i]);
    }

    int max, min;

    printf("Insira os valores max. e min. ");
    scanf("%i %i", &max, &min);

    int *mx = &max;
    int *mn = &min;

    f(v, mx, mn, size);
}

int f(int v[], int *mx, int *mn, int size)
{

    for (int i = 0; i < size; i++)
    {
        if (v[i] > *mx)
            *mx = v[i];

        if (v[i] < *mn)
            *mn = v[i];
    }

    printf("Valor maximo = %i. ", *mx);
    printf("Valor minimo = %i. ", *mn);
}
