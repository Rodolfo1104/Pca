#include <stdio.h>

int main(int argc, char const *argv[])
{
    int v[8];
    int *p;

    for (int i = 0; i < 8; i++)
    {
        printf("\n\nInsira o valor %i. ", i);
        scanf("%i", &*p);

        printf("O dobro de %i vale %i. ", *p, *p *2);

        v[i] = *p;

        if (*p % 2 == 0)
            printf("O elemento %i e par. ", i);
    }
    return 0;
}
