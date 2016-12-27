#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    double G, F, Y, x, a, x2, shag;
    char input[100], output[100], pattern[100];
    long int v = 0, b = 0, n = 0;
    int un;

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

    printf("Введите шаблон: ");
    scanf ("%s", pattern);
    memset(input, 0, 100);

    printf("%s", "Введите G-1 F-2 Y-3: ");
    scanf("%i", &un);
    memset(input, 0, 100);
    memset(output, 0, 100);

    switch (un) {
        case 1:
            while (x < x2) {
                if (fabs(25 * a * a + 30 * a * x + 9 * x * x) >= 0.00001) {
                    G = (9 * (7 * a * a - 19 * a * x + 10 * x * x)) / (25 * a * a + 30 * a * x + 9 * x * x);
                    sprintf(input, "%lf", G);
                    strcat(output, input);

                    x = x + shag;
                    if (x >= x2) {
                        break;
                    }
                }
            }
            printf("%s\n", output);
            while (v < strlen(output)) {
                if (strstr(output, pattern) - output + 1 < strlen(output)) {
                    n++;
                    v = strstr(output, pattern) - output + 1;
                    while (b != v) {
                        output[b] = ' ';
                        b++;
                    }
                    b = 0;
                }
                if (strstr(output, pattern) == 0)
                    break;
            }

                printf("Найдено совпадений : %ld\n", n);

                    break;

                case 2:
                    while (x < x2) {
                        if ((cos(9 * a * a - 13 * a * x - 10 * x * x) >= -1) &&
                            (cos(9 * a * a - 13 * a * x - 10 * x * x) <= 1)) {
                            F = cos(9 * a * a - 13 * a * x - 10 * x * x);
                            sprintf(input, "%lf", F);
                            strcat(output, input);

                            x = x + shag;
                            if (x >= x2) {
                                break;
                            }
                        }
                    }
            printf("%s\n", output);
            while (v < strlen(output)) {
                if (strstr(output, pattern) - output + 1 < strlen(output)) {
                    n++;
                    v = strstr(output, pattern) - output + 1;
                    while (b != v) {
                        output[b] = ' ';
                        b++;
                    }
                    b = 0;
                }
                if (strstr(output, pattern) == 0)
                    break;
            }

            printf("Найдено совпадений : %ld\n", n);

            break;

                case 3:
                    while (x < x2) {
                        if (-80 * a * a - 46 * a * x + 21 * x * x + 1 > 0.0001) {
                            Y = (log(-80 * a * a - 46 * a * x + 21 * x * x + 1)) / (log(10));
                            sprintf(input, "%lf", Y);
                            strcat(output, input);

                            x = x + shag;
                            if (x >= x2) {
                                break;
                            }

                        }
                    }
            printf("%s\n", output);
            while (v < strlen(output)) {
                if (strstr(output, pattern) - output + 1 < strlen(output)) {
                    n++;
                    v = strstr(output, pattern) - output + 1;
                    while (b != v) {
                        output[b] = ' ';
                        b++;
                    }
                    b = 0;
                }
                if (strstr(output, pattern) == 0)
                    break;
            }

            printf("Найдено совпадений : %ld\n", n);

            break;
                default:
                    printf("Ошибка");

            }
    return 0;
}