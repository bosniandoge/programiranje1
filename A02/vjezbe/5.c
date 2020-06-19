#include <stdio.h>

int main() 
{
    char c = '9';
    char cifra, m;
    m = 0x0F;
    printf("%d\n", m);
    cifra = c & m;
    printf("%d\n", cifra);
    return 0;
}