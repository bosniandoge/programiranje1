/* program koji za proizvoljnu vrijednost poluprečnika kruga
računa i ispisuje njegov obim i površinu. */

#include <stdio.h>
#define PI 3.14159

int main()
{
    float r, o, p;
    printf("r = ");
    scanf("%f", &r);
    o = 2 * r * PI;
    p = r * r * PI;
    printf("Obim: %6.3f\n", o);
    printf("Povrsina: %6.3f\n", p);
    return 0;
}