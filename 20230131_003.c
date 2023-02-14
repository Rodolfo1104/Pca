#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char date[11];
    int d, m, y;

    printf("Input DD/MM/YYYY. ");
    fgets(date, 12, stdin);

    if (strlen(date) != 11 || date[2] != '/' || date[5] != '/')
        printf("Invalid. '/' in the wrong position. \n");

    for (int i = 0; i < 10; i++)
    {
        if (i == 2 || i == 5)
        {
            continue;
        }
        if (date[i] < '0' || date[i] > '9')
        {
            printf("Invalid. Only integer numbers. \n");
        }
    }

    printf("Date: ");
    printf("%i   ", atoi(date));
    printf("%i   ", atoi(date + 3));
    printf("%i", atoi(date + 6));

    return 0;
}
