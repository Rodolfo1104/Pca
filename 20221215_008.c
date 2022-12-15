#include <stdio.h>

int main()

{
   float gc, gf ;

  printf("Digite a temperatura em C: ");
  scanf("%f", &gc);


  gf = (gc * 1.8) + 32;
  printf("\n temp em Celsius = %f", gf);
  return 0;
}
