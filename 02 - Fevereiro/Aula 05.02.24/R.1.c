#include <stdio.h>

int main() {
    int num1;
    float num2;

    // Entrada de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);

    printf("Digite um numero fracionario: ");
    scanf("%f", &num2);

    // Verificação e exibição do resultado
    if (num1 > num2) {
        printf("O numero inteiro %d e maior.\n", num1);
    } else if (num2 > num1) {
        printf("O numero fracionario %.2f e maior.\n", num2);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}

