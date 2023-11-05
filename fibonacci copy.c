#include <stdio.h>


long int fibonacci(int n){
    static long int cache[80] = {[0 ... 79] = -1};
    if(n <= 2){
        return cache[n-1] = 1;
    }
    //checa se o elemento está no vetor;
    if(cache[n-1] != -1){
        return cache[n-1];
    }
    else{
        cache[n-1] = fibonacci(n-2) + fibonacci(n-1);
        return cache[n - 1];
    }
}


