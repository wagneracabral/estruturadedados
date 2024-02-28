#include <stdio.h>

void adicionalPorvalor(int valor) {
    valor++;
    printf("argumento = %d\n", valor);

}
void adicionalPorReferencia(int *valor) {
    (*valor)++;
    printf("argumento = %d\n", *valor);

}


int main () {
    int valorOriginal = 100;
    adicionalPorvalor(valorOriginal);
    printf("valor original = %d\n", valorOriginal);

    adicionalPorReferencia(&valorOriginal);
    printf("valor original = %d\n", valorOriginal);

    return 0;

}