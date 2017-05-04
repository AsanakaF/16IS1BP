#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int *kv, *i;
    struct data{
        int a, b, c;
    };
    struct data *dat;
    dat = NULL;
    kv = NULL;
    i = NULL;
    printf ("Введите любое число: ");
    kv = (int *) malloc (sizeof (int));
    scanf("%i", kv);
    i = (int*) malloc (sizeof (int));
    dat = (struct data*) malloc (*kv * sizeof(struct data));
    for(*i=0;*i<*kv;(*i)++)
    {
        dat[*i].a = *i+1;
        dat[*i].b = *i+2;
        dat[*i].c = *i+3;
    }
    for(*i=1;*i<*kv;(*i)++)
    {
        printf("%i%i%i", dat[*i].a, dat[*i].b, dat[*i].c);
    }
    free (dat);
    free (kv);
    free (i);
    dat = NULL;
    kv = NULL;
    i = NULL;
    return 0;
}