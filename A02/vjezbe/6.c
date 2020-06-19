#include <stdio.h>

int main() {
    char cifra = 9;
    char c;
    c = cifra | 0x30;
    printf("%c\n", c);
    return 0;
}