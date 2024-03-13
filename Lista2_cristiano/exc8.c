#include <stdio.h>

int main() {
    int soma = 0;
    int contador = 0;

    printf("Digite os numeros entre 13 e 73 (digite 0 para parar):\n");

    int numero;
    do {
        scanf("%d", &numero);

        if (numero >= 13 && numero <= 73) {
            soma += numero;
            contador++;
        }
    } while (numero != 0);

    if (contador > 0) {
        float media = (float)soma / contador;
        printf("A media aritmetica dos numeros entre 13 e 73 é: %.2f\n", media);
    } else {
        printf("Numero incorreto.\n");
    }

    return 0;
}
