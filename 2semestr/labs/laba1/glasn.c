#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int *x,*y;
    char *line,inputl[100],b[12]={'A','e','i','o','Y','E','a','u','O','I','U','y'};

    printf("Введите латинские символы: ");
    scanf("%s",inputl);
    size_t line_lenght;
    line_lenght = strlen(inputl);
    inputl[line_lenght] = ' ';
    x = (int *) malloc(sizeof(int));
    y = (int *) malloc(sizeof(int));
    line = (char *) malloc(line_lenght+1*sizeof(char));

    for (*x = 0; *x<line_lenght; (*x)++)
    {
        line[*x]=inputl[*x];
        if (strchr(b,line[*x]) != NULL)
        {
            printf("%c ", line[*x]);
        }
    }
    free(x);
    free(y);
    free(line);

    return 0;
}