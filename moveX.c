#include <stdio.h>
#include <string.h>
     

void moveX(char *v, char *VF, char *vx, int *i, int *contador1, int *contador2) {
    int tam = strlen(v);
    
    if (*i <= tam) {
        if ('x' == v[*i]) {
            vx[*contador2] = v[*i];
            *i = *i + 1;
            *contador2 = *contador2 + 1;
    }

        else {
            VF[*contador1] = v[*i];
            *i = *i + 1;
            *contador1 = *contador1 + 1;
    }
    moveX(v, VF, vx, i, contador1, contador2);
}
    }
    


int main() {
    int i = 0;
    int contador_else = 0;
    int contador_guardaX = 0;
    char string[101];
    char trocada[101];
    char guardaX[101];
    scanf("%s", string);
    moveX(string, trocada, guardaX, &i, &contador_else, &contador_guardaX);
    strcat(trocada, guardaX);
    printf("%s", trocada);

    return 0;
}