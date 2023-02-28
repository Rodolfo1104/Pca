#include <stdio.h>

int main(int argc, char const *argv[])
{
    char eq[13][100] = {"Maria", "Lucas", "Ana", "Paulo", "Beatriz", "Diogo",
                        "Carlos", "Carla", "Vitor", "Camila", "Caio", "Laravel"};

    int notas[2][7] = {{1, 3, 5, 7, 9, 11},
                       {2, 4, 6, 8, 10, 12}};

    char sexo[13][1] = {"F", "M", "F", "M", "F", "M",
                        "M", "F", "M", "F", "M", "F"};

        printf("\n");
    letraC(eq, notas, sexo);
        printf("\n");
    letraD(eq, notas, sexo);
        printf("\n");
    letraF(eq, notas, sexo);
        printf("\n");
    letraG(eq, notas, sexo);

    return 0;
}

void letraC(char eq[12][100], int notas[2][6], char sexo[12][1])
{
    int count1 = 0, count2 = 0;

    for (int i = 0; i < 6; i++)
    {
        if (sexo[i][0] == 'F')
            count1++;
    }

    for (int j = 6; j < 12; j++)
    {
        if (sexo[j][0] == 'F')
            count2++;
    }

    if (count1 > count2)
    {
        printf("Eq. 01 > Eq. 02 ");
    }
    else if (count2 > count1)
    {
        printf("Eq. 02 > Eq. 01");
    }
    else
    {
        printf("As equipes tem a mesma quantidade de pessoas. ");
    }
}

void letraD(char eq[12][100], int notas[2][6], char sexo[12][1])
{
    char escolhidas[6][100];

    printf("Alunas aptas p/ o projeto: ");

    for (int i = 0; i < 12; i++)
    {
        for (int j = i; i < 12; j++)
        {
            if (notas[i][j] >= 8 && sexo[j][0] == 'F')
            {
                printf("%s ", eq[j]);
            }
        }
    }
}

void letraF(char eq[12][100], int notas[2][6])
{
    printf("Notas das [M E N I N A S] somadas: ");
    for (int j = 0; j < 6; j++)
    {
        notas[1][j] += 1;

        printf("%i ", notas[1][j]);
    }
}

void letraG(char eq[13][100], int notas[2][7], char sexo[13][1])
{
    int option;

    printf("Insira o nome do novo aluno. ");
    scanf(" %s", &eq[13]);

    setbuf(stdin, NULL);
    printf("Insira o sexo do novo aluno. ");
    scanf(" %s", &sexo[13]);

    setbuf(stdin, NULL);
    printf("Insira a nota do novo aluno. ");
    scanf("%i", &notas[2]);

    for (int i = 0; i < 14; i++)
    {
        printf("%s ", eq[i]);
    }
}
