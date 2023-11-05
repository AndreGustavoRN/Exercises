#include <stdio.h>

int maior100(int N) {
    int S = 0;
    N -= 10;
    S = N;
    return S; 
}


int fmenor100(int N) {
    int S = 0;
    while (N != 91) {
        if (N <= 100){
            N += 11;
            S = N;
        }
        else {
            N -= 10;
            S = N;
        }
    }
    return S;
}


int main() {
    int N;
    int S;
    scanf("%d", &N);
    while (N != 0) {
        if (N == 91) {
            S = fmenor100(N + 11);
            printf("f91(%d) = %d\n", N, S);
        } 

        if (N <= 100 && N != 91) {
            S = fmenor100(N);
            printf("f91(%d) = %d\n", N, S);
        }

        else if (N >= 100) {
            S = maior100(N);
            printf("f91(%d) = %d\n", N, S); 
            N = 0;
        }
        scanf("%d", &N);
    }
    return 0;
}