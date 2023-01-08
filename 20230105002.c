#include <stdio.h>
#include <stdlib.h>

float weight, weeks;
int boolean = 1;

{
    printf("Weight (grams): ");
    scanf("%f", &weight);

    printf("Gestation time (weeks): ");
    scanf("%f", &weeks);

    if (weight < 100 || weeks < 28)
    {
        printf("The birth mustn't happen. Clinically reevaluate.");
        boolean = 0;
    }
}

void IfAble()
{
    float months = weeks / 4;

    if (weight > 2500 && months > 7)
    {
        printf("Normal birth is recommended."); // Peso superior a 2.500 gramas e com mais de 7 meses: "Parto normal";
    }
    else if (weight > 2500 && months <= 7)
    {
        printf("Cesarean birth is recommended."); // Entre 2.000 gramas e 1.500 gramas e acima de 9 meses: "Parto normal";
    }
    else if (weight > 1500 && weight < 2000 && months > 9)
    {
        printf("Normal birth is recommended"); // Entre 2.000 gramas e 1.500 gramas e acima de 9 meses: "Parto normal";
    }
    else
    {
        printf("Cesarean birth is recommended"); // Qualquer outra combinação, "Parto Cesariana".
    }
}

int main(int argc, char const *argv[])
{

    IfNotAble();

    if (boolean == 1)
    {
        IfAble();
    }
    return 0;
}
