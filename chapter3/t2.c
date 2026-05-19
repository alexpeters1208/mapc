// testing books right-overflow concepts
#include "t2.h"

void ft32a() {
    char i;
    int* p = (int*) &i;
    *p = 1234567892;
    printf("%d\n", i);
}

void ft32b() {
    char buf[8] = {0};

    printf("before: ");
    for (int i = 0; i < 8; i++) printf("%02x ", (unsigned char)buf[i]);
    printf("\n");

    int* p = (int*) &buf[0];
    *p = 1234567892;

    printf("after:  ");
    for (int i = 0; i < 8; i++) printf("%02x ", (unsigned char)buf[i]);
    printf("\n");
}

void ft32() {
    ft32b();
}