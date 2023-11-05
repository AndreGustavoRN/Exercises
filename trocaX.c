#include <stdio.h>
#include <string.h>
     

void trocaX(char *vEntrada, int *i) {
    int tam = strlen(vEntrada);

    if (*i <= tam) {

        if ('x' == vEntrada[*i]) {
            vEntrada[*i] = 'y';
    }
        *i = *i + 1;

    trocaX(vEntrada, i);
    }
}
    


int main() {
    int i = 0;
    char string[101];
    scanf("%s", string);
    trocaX(string, &i);
    printf("%s", string);

    return 0;
}