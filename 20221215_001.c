#include <stdio.h>

int main()

{
  int num1 = 0;
  int num2 = 0;
  int soma = 0;
  printf("Digite um numero: ");
  scanf("%d", &num1);

  printf("Digite outro numero: ");
  scanf("%d", &num2);

  soma = num1 + num2;
  printf("\n Soma = %d", soma);
  return 0;
}
