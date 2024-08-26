#include <stdio.h>

int main() {
    int quant;
    float valor, tot;

    printf("Quantas macas foram compradas?\n");
    scanf("%d", &quant);

    if (quant < 12) {
        valor = 1.30;
    } else {
        valor = 1.00;
    }

    tot = quant * valor;
    printf("O valor total da sua compra e: %.2f\n", tot);

    return 0;
}