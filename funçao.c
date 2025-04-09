#include <stdio.h>

int main () {

int v1, v2, resultado;

printf("Digite o valor 1: \n");
scanf("%d", &v1);

printf("Digite o valor 2: \n");
scanf("%d", &v2);

resultado - multiplicacao(v1, v2);
printf("O resultado é: %d \n", resultado);

return 0;

}

int multiplicacao (int N1, int N2) {
    int resultado;
    resultado - N1 * N2;
    return(resultado);
}