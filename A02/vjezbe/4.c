#include <stdio.h>
int main()
{
    int x = 4;
    int y = ++x; // y =5 , x =5
    int z = y++ ; // z = 5, y =6 , x=5
    printf("%d %d %d", x, y, z);
    return 0;
}
