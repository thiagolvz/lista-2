#include <stdio.h>

int main() {
    float salarioFixo, vendas, comissao;

    printf("Digite o salario fixo do vendedor:\n");
    scanf("%f", &salarioFixo);

    printf("Digite o valor total das vendas:\n");
    scanf("%f", &vendas);

    if (vendas <= 1500) {
        comissao = vendas * 0.03;
    } else {
        comissao = (1500 * 0.03) + ((vendas - 1500) * 0.05);
    }

   
    float salarioTotal = salarioFixo + comissao;

    printf("O salario total do vendedor e: %.2f\n", salarioTotal);

    return 0;
}