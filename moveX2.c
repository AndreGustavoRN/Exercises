#include <stdio.h>
#include <string.h>

void moveX(char *vetor, char *vetorFinal, int *i, int *c, int *x ,char *vetorX){
    if (*i < strlen(vetor)) {

        if (vetor[*i] != 'x'){
            vetorFinal[*c] = vetor[*i];
            *i = *i + 1;
            *c = *c + 1; 
        } else {
            vetorX[*x] = 'x';
            *x = *x + 1;
            *i = *i + 1;
        }
        moveX(vetor, vetorFinal, i, c, x, vetorX);
    }
}

int main() {
    char vEntrada[101];
    char vFinal[101];
    char vetorX[101];
    int x = 0;
    int i = 0;
    int c = 0;
    scanf("%s", vEntrada);
    moveX(vEntrada, vFinal, &i, &c, &x, vetorX);
    strcat(vFinal, vetorX);
    printf("%s\n", vFinal);
    return 0;
}