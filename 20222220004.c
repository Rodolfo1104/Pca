# include <stdio.h>
# include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, soma = 0;
    int maior, menor = 0;

    for(int i = 1; i < 21; i++){
        printf("Insira o numero %i: ", i);
        scanf("%i", &n);

        if (i == 1) {
        maior = menor = n;
        } else if (n > maior) {
        maior = n;
        } else if (n < menor) {
        menor = n;
        }
    }

    printf("\nMaior numero = %i \n", maior);
    printf("Menor numero = %i", menor);

    return 0;
}
