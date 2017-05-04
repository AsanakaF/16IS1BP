#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int *x,*y;
    char *line,inputl[100],b[12]={'A','e','i','o','Y','E','a','u','O','I','U','y'};
    *x = NULL;
    *y = NULL;
    *line = NULL;
    size_t line_lenght;
    memset(inputl,100, 0);
    printf("Введите буквы: ");
    scanf("%s", inputl);
    x = (int *)malloc(sizeof(int));
    y = (int *)malloc(sizeof(int));
    line = (char*)malloc(sizeof(char)*line_lenght+1);
    for(*x=0; *x<line_lenght;(*x)++)
    {
        line[*x]=inputl[*x];
        if (strchr(b,line[*x]) !=NULL)
        {
            printf("%c",line[*x]);
        }
    }
    free(x);
    free(y);
    free(line);
    x = NULL;
    y = NULL;
    line = NULL;
    return 0;
}
