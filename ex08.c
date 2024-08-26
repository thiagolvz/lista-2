#include <stdio.h>

int main() {
    int horaInicio, horaFim, duracao;

    
    printf("Digite a hora de inicio do jogo:\n");
    scanf("%d", &horaInicio);

    printf("Digite a hora de fim do jogo:\n");
    scanf("%d", &horaFim);

    
    if (horaFim >= horaInicio) {
        duracao = horaFim - horaInicio; 
    } else {
        duracao = (24 - horaInicio) + horaFim; 
    }

    
    if (duracao == 0) {
        duracao = 24;
    }

    
    printf("A duracao do jogo foi de %d horas.\n", duracao);

    return 0;
}