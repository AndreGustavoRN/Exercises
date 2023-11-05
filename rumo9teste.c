#include <stdio.h>

int contadigitos(long int num, int *contador){
    if(num > 0){
        num = num / 10;
        *contador = *contador + 1;
        contadigitos(num, contador);
    }
    return *contador;
}


int esmultiple(long int *nEntrada, int *acumulador) {
    if (*nEntrada > 0) {
        *acumulador += *nEntrada % 10;
        *nEntrada = *nEntrada / 10;
        esmultiple(nEntrada, acumulador);
    }
    return *acumulador;
}

int main() {
    int deposit = 0;
    int i = 0;
    long int num = 0;
    scanf("%ld", &num);

    while (num != 0){
        deposit = 0;
        long int copianum = num;

        esmultiple(&num, &deposit);
            int t = deposit;
            deposit = deposit % 9;
            if (deposit == 0) {
                int count = 0;
                int digitos = contadigitos(t, &count);
                printf("%ld is a multiple of 9 and has 9-degree %d.\n", copianum, digitos);
            } 
            else {
                printf("%ld is not a multiple of 9.\n", copianum);
            }
        scanf("%ld", &num);
    }
    return 0;
    }


