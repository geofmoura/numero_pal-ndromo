#include <stdio.h>

int main() {
    int numero;
    int a, b, c, d;


    printf("Digite um número de 4 dígitos: ");
    scanf("%d", &numero);

    if (numero < 1000 || numero > 9999) {
        printf("O número deve ter exatamente 4 dígitos.\n");
        return 0;
    }

    a = numero / 1000;
    b = (numero / 100) % 10;
    c = (numero / 10) % 10;
    d = numero % 10;

    if (a == d && b == c) {
        printf("É um número palíndromo.\n");
    } else {
        printf("Não é um número palíndromo.\n");
    }

    return 0;

}
