#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main() {
   float al,pe;
   
   printf("Informe sua altura:");
   scanf ("%f",&al);
   
   pe =(72.7 * al) - 58;
   
   printf("\nSeu peso ideal é %.2f.",pe);
}
