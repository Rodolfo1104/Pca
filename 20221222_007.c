#include <stdio.h>
int main(int argc, char const *argv[])
{
    float m0, mf;
    float tempo = 0;

    printf("Entre com o peso do material: ");
    scanf("%f", &m0);
    mf = m0 + 0;

    while (mf > 0.5) {
        tempo += 50;
        mf = mf/2;
    }

    if (m0 > 0.5) {
        printf("Massa inicial: %.2fg\n", m0);
        printf("Massa final: %.2fg\n", mf);
        printf("O tempo para que a massa fosse menor que 0.5g foi:\n");
        printf("%.2f segundos = %.2f minutos = %.3f horas", tempo, tempo/60, tempo/3600);
    } else {
        printf("A massa ja e menor que 0.5 gramas");
    }
    return 0;
}
