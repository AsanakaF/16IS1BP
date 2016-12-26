#include <stdio.h>
int main(void)
{
    float x,a;

    scanf("%f", &x); scanf("%f", &a);
    while (x < a)
    {
        x += 0.5;
        printf("%f\n", x);
    }
    return 0;
}