#include <stdio.h>
/* Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.*/
int main() {
    int numero = 101; 

    printf("Numeros impares entre 100 e 200:\n");
    while (numero <= 200) {
        printf("%d\n", numero);
        numero += 2; 
    }

    return 0;
}
