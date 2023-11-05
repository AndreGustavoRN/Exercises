#include <stdio.h>

void swap(int *a, int*b){
    int t = *a;
    *a = *b;
    *b = t;
}

int main()[
    int num1 = 100;
    int num2 = 150;
    printf("Antes da troca: %d %d", num1, num2);
    swap(&num1, &num2);
    printf("Depois da troca: %d %d", num1, num2);

    return 0;
]