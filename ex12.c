#include <stdio.h>

int main() {
    int numeroConta;
    float saldo, debito, credito, saldoAtual;

    printf("Digite o numero da conta do cliente:\n");
    scanf("%d", &numeroConta);

    printf("Digite o saldo:\n");
    scanf("%f", &saldo);

    printf("Digite o debito:\n");
    scanf("%f", &debito);

    printf("Digite o credito:\n");
    scanf("%f", &credito);

    saldoAtual = saldo - debito + credito;

    printf("O saldo atual e: %.2f\n", saldoAtual);

    if (saldoAtual >= 0) {
        printf("Saldo Positivo\n");
    } else {
        printf("Saldo Negativo\n");
    }

    return 0;
}