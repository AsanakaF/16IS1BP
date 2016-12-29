#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() {
    FILE *file, *file1;     /*Вводим файлы*/
    struct {
        double G[100];
        double F[100];
        double Y[100];
    }
            fun;

    char input[100];
    int i = 0;
    double x, a, x2, shag, memory[1];

    printf("%s", "Введите x меньше x2.");
    printf("%s", "Введите x: ");
    scanf("%s", input);
    x = atof(input);
    memset(input, 0, 100);

    printf("%s", "Введите x2: ");
    scanf("%s", input);
    x2 = atof(input);
    memset(input, 0, 100);

    printf("%s", "Введите a: ");
    scanf("%s", input);
    a = atof(input);
    memset(input, 0, 100);


    printf("%s", "Введите шаг: ");
    scanf("%s", input);
    shag = atof(input);
    memset(input, 0, 100);

    memory[0] = x;
    memory[1] = x2;

    while (x < x2) {
        if (fabs(25 * a * a + 30 * a * x + 9 * x * x) >= 0.00001) {
            fun.G[i] = (9 * (7 * a * a - 19 * a * x + 10 * x * x)) / (25 * a * a + 30 * a * x + 9 * x * x);
            printf("G = %f\n", fun.G[i]);
        }
        i++;
        if (i > 100) {
            printf("Массив переполнен");
            break;
        }
        x = x + shag;
        if (x >= x2) {
            break;
        }
    }
    printf("F:                               \n");
    i = 0;
    x = memory[0];
    x2 = memory[1];

    while (x < x2) {
        if ((cos(9 * a * a - 13 * a * x - 10 * x * x) >= -1) && (cos(9 * a * a - 13 * a * x - 10 * x * x) <= 1)) {
            fun.F[i] = cos(9 * a * a - 13 * a * x - 10 * x * x);
            printf("F = %f\n", fun.F[i]);
        }
        i++;
        if (i > 100) {
            printf("Массив переполнен");
            break;
        }
        x = x + shag;
        if (x >= x2) {
            break;
        }
    }
    printf("Y:                                \n");
    i = 0;
    x = memory[0];
    x2 = memory[1];

    while (x < x2) {
        if (-80 * a * a - 46 * a * x + 21 * x * x + 1 > 0.0001) {
            fun.Y[i] = (log(-80 * a * a - 46 * a * x + 21 * x * x + 1)) / (log(10));
            printf("Y = %f\n", fun.Y[i]);
        }
        i++;
        if (i > 100) {
            printf("Массив переполнен");
            break;
        }
        x = x + shag;
        if (x >= x2) {
            break;
        }
    }

    printf("End                                       \n");
    file = fopen("/home/alena/lab7.txt","w");
    fprintf(file, "__________________________________________________________\n");
    for (i = 0; i < 100; i++)
    {
        fprintf(file,"%lf/%lf/%lf\n",fun.G[i], fun.F[i], fun.Y[i]);
        fprintf(file, "________________________________________________________\n");
    }
    fclose(file);
    file1 = (FILE *) fopen("lab7.txt","r");
    if ((file1 = fopen("lab7.txt","r")) == NULL)
    {
        printf("Ошибка при открытии файла.\n");
        exit(1);
    }
    while (!feof(file1))   /*проверяем достигнут ли конец файла*/
    {
        fscanf(file, "%s", input);
        printf("%s\n", input);
    }
    fclose(file1);

    return 0;
}
