#include <stdio.h>
int main(void)
{
    float x,a;
    scanf("%f", &x); scanf("%f", &a);
    do
    {
        printf("%f %f\n", x, a);
        x += 0.5;
    }
    while (x > a);
    return 0;
}