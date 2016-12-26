#include <stdio.h>
int main(void)
{
    int i, j;
    float x,a;
    scanf("%f", &x); scanf("%f", &a);
    for(;;)
    {
        printf("%f %f\n", x, a);
        x += 0.5;
        if ((x < 5)) continue;
        else break;
    }
    return 0;
}