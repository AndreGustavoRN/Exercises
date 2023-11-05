#include <stdio.h>

int somador(long int *nEntrada, int *acumulador) {
    if (*nEntrada > 0) {
        *acumulador += *nEntrada % 10;
        *nEntrada = *nEntrada / 10;
        somador(nEntrada, acumulador);
    }
    return *acumulador;
}

int main() {
    int deposit = 0;
    long int num = 0;
    scanf("%ld", &num);
    int t = somador(&num, &deposit);
    printf("%d\n", t);

    return 0;
    }


