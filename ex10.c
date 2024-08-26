#include <stdio.h>

int main() {
    char nome[50], sexo;
    float altura, pesoIdeal;

    printf("Digite seu nome:\n");
    scanf("%s", nome);

    printf("Digite a sua altura (em metros):\n");
    scanf("%f", &altura);

    printf("Digite o seu sexo (M/F):\n");
    scanf(" %c", &sexo);

    if (sexo == 'M') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F') {
        pesoIdeal = (62.1 * altura) - 44.7;
    }

    printf("O peso ideal de %s e: %.2f kg\n", nome, pesoIdeal);

    return 0;
}