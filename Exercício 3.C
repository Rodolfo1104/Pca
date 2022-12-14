#include <stdio.h>

int main(){
 float conta;
 float comissao;

 printf("Valor gasto: ");
 scanf_s("%f", &conta);

 comissao = conta / 10;

 printf("A comissao é: %f", comissao);

 return 0;
}