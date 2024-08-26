#include <stdio.h>

int main() {
    int ano, nasc, idade;

    printf("Digite o ano atual:\n");
    scanf("%d", &ano);

    printf("Digite o ano de seu nascimento:\n");
    scanf("%d", &nasc);

    idade = ano - nasc;

    if (idade >= 16) {
        printf("Voce pode votar este ano!");
    } else {
        printf("Voce nao pode votar este ano!");
    }


    return 0;
}