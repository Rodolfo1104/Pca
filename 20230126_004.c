#include <stdio.h>
#include <stdlib.h>

int main(){

int m[3][3], i, j, x;

printf("Digite o valor de x: ");
scanf("%d", &x);

printf("\n");

for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        printf("Digite os valores da matriz: ");
        scanf("%d", &m[i][j]);
    }
}

for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        printf("%d ", m[i][j]);
    }
    printf("\n");
}
printf("\n");

for(i = 0; i < 3; i++){
    for(j = 0; j < 3; j++){
        if(m[i][j] == x){
            printf("A linha eh %d ", i);
            printf("A coluna eh %d ", j);
        }
    }
}
return 0;
}
