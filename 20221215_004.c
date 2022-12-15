#include <stdio.h>

int main()

{
   float r, area;

  printf("Digite o valor do raio: ");
  scanf("%f", &r);

  area = r * r * 3.14;
  printf("\n Valor da area = %f", area);
  return 0;
}
