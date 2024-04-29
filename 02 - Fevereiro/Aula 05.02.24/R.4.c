#include <stdio.h>

void desenharRetangulo(int numeroLinhas) {
    for (int i = 0; i < numeroLinhas; i++) {
        for (int j = 0; j < numeroLinhas; j++) {
            printf("^ ");  // Use qualquer caractere desejado para desenhar o ret�ngulo
        }
        printf("\n");  // Muda para a pr�xima linha ap�s desenhar uma linha completa
    }
}

int main() {
    int numero;

    printf("Digite um numero para o tamanho do retangulo: ");
    scanf("%d", &numero);

    if (numero <= 0) {
        printf("Por favor, digite um numero maior que zero.\n");
    } else {
        desenharRetangulo(numero);
    }

    return 0;
}

