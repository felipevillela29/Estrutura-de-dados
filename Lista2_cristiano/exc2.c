#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;

    printf("Quais são os numeros? digite 0 para encerrar:\n");

    scanf("%d", &numero);
    while (numero != 0) {

        if (numero % 2 == 0) {
            soma += numero;
            contador++;
        }

        scanf("%d", &numero);//vai ler o proximo numero
    }
      if 


    return 0;
}
