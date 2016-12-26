#include <stdio.h>
int main(void)
{
    int i, j;
    for (i = 0, j = 5; i < 10, j > 0; i++, j--)
        printf("%d %d\n", i, j );

    return 0;
}