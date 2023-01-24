#include <stdio.h>

int main(int argc, char const *argv[])
{
    int list [100]; 
    int i, qt;

    printf("How long is the sequence? ");
    scanf("%i", &qt);

    for (i = 1; i <= qt; i++)
    {
        printf("\nType a number. ");
        scanf("%i", &list[i]);
    }

    for (i = 1; i <= qt; i++)
    {
        printf("[%i]", list[i]);
    }

    printf("\n");

    for (i = qt; i <= qt && i > 0; i--)
    {
        printf("[%i]", list[i]);
    }

    return 0;
}
