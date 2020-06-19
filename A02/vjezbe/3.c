#include <stdio.h>

int main() 
{
    int x = 10, y=10,i,j;
    printf("%d %d %d %d %d\n", 5 && 1, 0 && 5, 3 || 5, !0, !9);
    i = 0 && (x = 11);
    j = 1 || (y = 11);
    printf("%d %d %d %d\n", i,j,x,y);
    return 0;
}