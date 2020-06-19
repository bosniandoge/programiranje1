#include <stdio.h>

int main() {
    int x = 10;
    printf("%d %d %d %d \n", 3<5, 3>5, 3 == 5, 3 != 5); // ako tacno = 1, ako nije 0
    printf("%d\n", 3 < x < 5);
    return 0;
}