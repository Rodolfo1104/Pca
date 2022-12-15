#include <stdio.h>
#include <stdlib.h>

 main() {
    float sh,h,st,inss,sind,sl,ir;
    
    printf("Quantas horas você trabalha por mês?");
    scanf("%f",&h);
    printf("\nQual o seu salário por hora?");
    scanf("%f",&sh);
    
    st=h*sh;
    inss=(st*0.08);
    sind= (st*0.05);
    ir=(st*0.11);
    sl = st - (inss+sind+ir);
    
    printf("\n\nSeu salário bruto é :%.2f.",st);
    printf("\nVocê pagou %.2f para o INSS.",inss);
    printf("\nVocê pagou %.2f para o Sindicato.",sind);
    printf("\nSeu imposto de renda foi :%.2f.",ir);
    printf("\nSeu salário líquido é %.2f.",sl);
}
