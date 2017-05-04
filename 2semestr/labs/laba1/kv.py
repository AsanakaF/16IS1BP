#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int *a, *i=0, *n;
    i = NULL;
    a = NULL;
    n = NULL;
    i = (int *) malloc(sizeof(int));
    a = (int *) malloc(sizeof(int));
    n = (int *) malloc(sizeof(int));
    printf("%s", "Введите кол-во чисел: ");
    scanf("%i", &(*n));
    while ((*i) <= (*n))
    {
        (*a) = (*i) * (*i);
        printf("%i | %i\n ", *i, *a);
        (*i)++;
    }
    return 0;
}
