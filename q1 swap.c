#include <stdio.h>

struct point {
    int value;
};

struct point s;
struct point *ptr = &s;

int main() {
    s.value = 20;
    (*ptr).value = 40;
    ptr->value = 30;

    printf("%d\n", s.value);

}
