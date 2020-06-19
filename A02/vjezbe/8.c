#include <stdio.h>

int main() {
    char x = 0x73, y;
    printf("%c\n", x);
    y = x ^ 0x32;
    printf("%c\n", 0x32);
    printf("%c\n", y);
    return 0;
}