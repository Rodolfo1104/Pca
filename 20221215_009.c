#include <stdio.h>
#include <stdlib.h>
main() {
    int n1,n2;
    float n3,a,b,c;
    
    printf("Informe um número inteiro:");
    scanf ("%i",&n1);
    printf ("\nInforme um número inteiro:");
    scanf ("%i",&n2);
    printf ("\nInforme um número real:");
    scanf ("%f",&n3);
    
    a = (2*n1)*(n2/2);
    b = (3*n1)+n3;
    c = n3*n3*n3;
    
    printf("\n\nO produto do dobro do primeiro com metade do segundo é igual a %.2f",a);
    printf("\nA soma do triplo do primeiro com o terceiro é igual a %.2f",b);
    printf("\nO terceiro elevado ao cubo é igual a %.2f",c);
}
