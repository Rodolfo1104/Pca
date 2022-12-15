#include <stdio.h>

int main()

{
   float gf, gc ;

  printf("Digite a temperatura em C: ");
  scanf("%f", &gf);


  gc = (5 * (gf - 32)/9);
  printf("\n temp em Celsius = %f", gc);
  return 0;
}
