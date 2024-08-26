#include <stdio.h>

int main() {
    float n1, n2, media;

    printf("Digite a nota da 1a avaliacao:\n");
    scanf("%f", &n1);

    printf("Digite a nota da 2a avaliacao:\n");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if (media >= 7) {
        printf("Aluno aprovado! Media: %.1f", media);
    } else {
        printf("Aluno reprovado! Media: %.1f", media);
    }

    return 0;
}