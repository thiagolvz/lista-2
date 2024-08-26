#include <stdio.h>

int main() {
    float n1;

    printf("Digite um valor:\n");
    scanf("%f", &n1);

    if (n1 >= 0) {
        printf("E um valor POSITIVO!");
    } else {
        printf("E um valor NEGATIVO!");
    }

    return 0;
}