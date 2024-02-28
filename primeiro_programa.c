#include <stdio.h>
#include <limits.h>

int main() {

    printf("-----------\n");
    printf(" - inteiro minimo %d | inteiro maximo: %d\n", INT_MIN, INT_MAX);
    printf(" - inteiro sem sinal maximo: %u\n", UINT_MAX);
    printf(" - numeros de bits por byte: %d\n", CHAR_BIT);
    printf(" - char minimo: %d : char maximo: %d\n", CHAR_MIN, CHAR_MAX);
    printf("-----------\n");
    
    char vchar;
    int vint;
    short int vshortint;
    long int vlongint;
    float vfloat;
    double vdouble;
    long double vlongdouble;

   
    printf("Tamanhos\n");
    printf(" - char: %lu\n", sizeof vchar);
    printf(" - int: %lu\n", sizeof vint);
    printf(" - short int: %lu\n", sizeof vshortint);
    printf(" - long int: %lu\n", sizeof vlongint);
    printf(" - float: %lu\n", sizeof vfloat);
    printf(" - double: %lu\n", sizeof vdouble);
    printf(" - long double: %lu\n", sizeof vlongdouble);
    
    return 0;
}