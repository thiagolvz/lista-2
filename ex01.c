#include <stdio.h>

int main() {
    int n1;

    printf("Digite um valor:\n");
    scanf("%d", &n1);

    if (n1 <= 10) {
        printf("NAO E MAIOR QUE 10!");
    } else {
        printf("E MAIOR QUE 10!");
    }

    return 0;
}