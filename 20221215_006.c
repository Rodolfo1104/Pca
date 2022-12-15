#include <stdio.h>

int main()

{
   float gh, ht, salario;

  printf("Digite o ganho por hora: ");
  scanf("%f", &gh);

  printf("Digite as horas trabalhadas: ");
  scanf("%f", &ht);

  salario = gh * ht * 30;
  printf("\n Valor do salario = %f", salario);
  return 0;
}
