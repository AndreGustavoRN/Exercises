#include <stdio.h>
#include <string.h>


int qtdpar(char *input) {
    int tam = strlen(input);
    static int i = 0;
    static int deposito = 0;

    if(i < tam - 1){
        if(input[i] == input[i + 2]){
            deposito += 1;
            i = i + 1;
        }
        else{
            i = i + 1;
        }
            qtdpar(input);
    }
    return deposito;
}


int main(){
    char entrada[201];
    int acumulador;
    scanf("%s", entrada);
    int r = qtdpar(entrada);
    printf("%d", r);

    return 0;
}