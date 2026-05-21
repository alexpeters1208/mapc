#include <stdio.h>
#include <stdlib.h>

struct mystruct {
    char a;
    int b;
};

void copy(void* dst, void* src) {
    *(char*)dst = *(char*)src;
}

void ft33() {
    char* p;
    struct mystruct x;

    printf("%p\n", &x);

    p = malloc(5);
    copy(p, &x);

    printf("%p\n", p);
    printf("%p\n", &x);

    free(p);
};