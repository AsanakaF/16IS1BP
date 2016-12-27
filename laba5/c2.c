#include <stdio.h>

#include <string.h>

int main(void)

{

    char mystring[255];

    scanf("%s", &mystring);

    printf("%d\n", strlen(mystring));

    return 0;

}