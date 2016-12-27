int main(void)

{

    char mystring[255];

    int test;

    char result[255];

    scanf("%s", &mystring);

    test = atoi(mystring);

    printf("%d\n", test);

    itoa(test,result,10);

    printf("%s\n", result);

    return 0;

}