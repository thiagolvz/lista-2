#include <stdio.h>

int main() {
    float n1, n2;
    
    printf("Digite o primeiro valor:\n");
    scanf("%f", &n1);

    printf("Digite o segundo valor:\n");
    scanf("%f", &n2);

    if (n1 > n2) {
        printf("O maior numero e o %.1f", n1);
    } else {
        printf("O maior numero e o %.1f", n2);
    }





    return 0;
}