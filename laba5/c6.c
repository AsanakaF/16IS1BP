#include <stdio.h>

#include <string.h>

#include <stdlib.h>

int main(void)

{

    char mystring1[255];

    char mystring2[255];

    scanf("%s", &mystring1);

    scanf("%s", &mystring2);

    printf("%d\n", strcmp(mystring1, mystring2));

    return 0;

}