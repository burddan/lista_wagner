#include <stdio.h>

float calcular(int numeros[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += numeros[i];
    }
    return (float)soma / tamanho;
}

int main() {
    int numeros[] = {10, 20, 30, 40, 50};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    float media = calcularmedia(numeros, tamanho);
    printf("%f\n", media);
}

