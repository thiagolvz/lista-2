#include <stdio.h>

int main() {
    int horasTrabalhadas;
    float salarioHora, salarioTotal, salarioNormal, horasExtras;

    printf("Digite o numero de horas trabalhadas no mes:\n");
    scanf("%d", &horasTrabalhadas);

    printf("Digite o salario por hora:\n");
    scanf("%f", &salarioHora);

    int horasNormais = 160; 
    if (horasTrabalhadas > horasNormais) {
        horasExtras = horasTrabalhadas - horasNormais;
    } else {
        horasExtras = 0;
    }

    salarioNormal = salarioHora * horasNormais;
    float salarioHoraExtra = salarioHora * 1.5;
    float salarioExtras = horasExtras * salarioHoraExtra;

    salarioTotal = salarioNormal + salarioExtras;

    printf("O salario total do funcionario e: %.2f\n", salarioTotal);

    return 0;
}