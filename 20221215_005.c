#include <stdio.h>

int main()

{
   float l, area1, area2;

  printf("Digite o valor do lado: ");
  scanf("%f", &l);

  area1 = l * l;
  area2 = 2 *area1;
  printf("\n Valor da area em dobro = %f", area2);
  return 0;
}
