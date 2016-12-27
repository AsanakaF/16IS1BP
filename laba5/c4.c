#include <stdio.h>

#include <string.h>

int main(void)

{

    char mystring[255];

    scanf("%s", &mystring);

    printf("%s\n", strupr(mystring));

    return 0;

}