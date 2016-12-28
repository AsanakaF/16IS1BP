#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *file;

    file = (FILE *)fopen("test.txt", "w+");
    fprintf(file, "%f\n", 2.567f);
    fclose(file);

    return 0;
}