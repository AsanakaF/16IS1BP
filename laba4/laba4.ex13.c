#include <stdio.h>
#include <math.h>

int main() {
    int j , i;
    double G, F, Y, x, a, x2, shag, min, max ;
    int un;

    printf("%s", "Введите x меньше x2.");
    printf("%s", "Введите x: ");
    scanf("%lf", &x);

    printf("%s", "Введите x2: ");
    scanf("%lf", &x2);

    printf("%s", "Введите a: ");
    scanf("%lf", &a);

    printf("%s", "Введите шаг: ");
    scanf("%lf", &shag);

    double mas[i];
    j = 0;

    printf("%s", "Введите G-1 F-2 Y-3: ");
    scanf("%i", &un);

    switch (un) {
        case 1:
            while (x < x2) {
                if (fabs(25 * a * a + 30 * a * x + 9 * x * x) >= 0.00001)
                    G = (9 * (7 * a * a - 19 * a * x + 10 * x * x)) / (25 * a * a + 30 * a * x + 9 * x * x);
                printf("%lf \n", G);
                x = x + shag;
                mas[j] = G;
                j = j + 1;
                j = 0;
                max = mas[0];
                min = mas[0];
                j = j + 1;
                if (max < mas[j])
                    max = mas[j];
                if (min > mas[j])
                    min = mas[j];

                printf(" Максимальное значение  = %lf\n ", max);
                getchar();
                printf("Минимальное значение = %lf\n", min);
                getchar();
            }
            break;
        case 2:
            while (x < x2) {
                if ((cos(9 * a * a - 13 * a * x - 10 * x * x) >= -1) && (cos(9 * a * a - 13 * a * x - 10 * x * x) <= 1))
                    F = cos(9 * a * a - 13 * a * x - 10 * x * x);
                printf("%f\n", F);
                x = x + shag;
                mas[j] = F;
                j = j + 1;
                j = 0;
                max = mas[0];
                min = mas[0];
                j = j + 1;
                if (max < mas[j])
                    max = mas[j];
                if (min > mas[j])
                    min = mas[j];

                printf(" Максимальное значение  = %lf\n ", max);
                getchar();
                printf("Минимальное значение = %lf\n", min);
                getchar();
            }
            break;
        case 3:
            while (x < x2) {
                if (-80 * a * a - 46 * a * x + 21 * x * x + 1 > 0.0001 )
                    Y = (log(-80 * a * a - 46 * a * x + 21 * x * x + 1)) / (log(10));
                printf("%f\n", Y);
                x = x + shag;
                mas[j] = G;
                j = j + 1;
                j = 0;
                max = mas[0];
                min = mas[0];
                j = j + 1;
                if (max < mas[j])
                    max = mas[j];
                if (min > mas[j])
                    min = mas[j];

                printf(" Максимальное значение  = %lf\n ", max);
                getchar();
                printf("Минимальное значение = %lf\n", min);
                getchar();
            }
            break;
        default:
            printf("Неправильно выбрана функция.");

    }
}
