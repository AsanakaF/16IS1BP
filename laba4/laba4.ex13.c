#include <stdio.h>
#include <math.h>

int main(void)
{
    int j = 0;
    double G, F, Y, x, a, x2, shag, raznf, Y2, F2, G2, max = 0, min = 0, mas[j] ;
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

    printf("%s", "Введите разницу между функциями: ");
    scanf("%lf", &raznf);

    printf("%s", "Введите G-1 F-2 Y-3: ");
    scanf("%i", &un);

    switch (un)
    {
        case 1:
            while (x < x2)
            {
                if (fabs(25 * a * a + 30 * a * x + 9 * x * x) >= 0.00001)
                {
                    G = (9 * (7 * a * a - 19 * a * x + 10 * x * x)) / (25 * a * a + 30 * a * x + 9 * x * x);
                    printf("G = %f\n", G);

                    mas[j] = G;

                    max = mas [0];
                    min = mas [0];

                    for (j = 0; j < G; j++)
                    {
                        if (max < mas[j])
                            max = mas[j];
                        if (min > mas[j])
                            min = mas[j];
                    }

                    G2 = (9 * (7 * a * a - 19 * a * (x + shag) + 10 * (x + shag) * (x + shag))) /
                         (25 * a * a + 30 * a * (x + shag) + 9 * x * (x + shag));

                    if (G2 - G == raznf)
                    {
                        G2 = (9 * (7 * a * a - 19 * a * (x + shag) + 10 * (x + shag) * (x + shag))) /
                             (25 * a * a + 30 * a * (x + shag) + 9 * x * (x + shag));

                        break;
                    } else
                    {

                        shag = shag * 2;
                        G2 = (9 * (7 * a * a - 19 * a * (x + shag) + 10 * (x + shag) * (x + shag))) /
                             (25 * a * a + 30 * a * (x + shag) + 9 * x * (x + shag));

                        {

                            x = x + shag;
                            if (x >= x2)
                                break;
                        }
                    }
                    printf("Наибольший элемент %f\n", max);
                    getchar();
                    printf("Наименьший элемент %f\n", min);
                    getchar();
                }
                else
                {
                    printf("Функция не определена");
                }
            }
            break;

        case 2:
            while (x < x2)
            {
                if ((cos(9 * a * a - 13 * a * x - 10 * x * x) >= -1) && (cos(9 * a * a - 13 * a * x - 10 * x * x) <= 1))
                {
                    F = cos(9 * a * a - 13 * a * x - 10 * x * x);
                    printf("F = %f\n", F);

                    mas[j] = F;
                    max = mas [0];
                    min = mas [0];

                    for (j = 0; j < F; j++)
                    {
                        if (max < mas[j])
                            max = mas[j];
                        if (min > mas[j])
                            min = mas[j];
                    }

                    F2 = cos(9 * a * a - 13 * a * (x + shag) - 10 * (x + shag) * (x + shag));
                    if (F2 - F == raznf) {
                        F2 = cos(9 * a * a - 13 * a * (x + shag) - 10 * (x + shag) * (x + shag));
                        break;
                    } else {
                        shag = shag * 2;
                        F2 = cos(9 * a * a - 13 * a * (x + shag) - 10 * (x + shag) * (x + shag));
                        {
                            max = x;
                            x = x + shag;
                            if (x >= x2)
                                break;
                        }
                    }
                    printf("Наибольший элемент %f\n", max);
                    getchar();
                    printf("Наименьший элемент %f\n", min);
                    getchar();
                }
                else
                {
                    printf("Значение выражения не пренадлежит области определения функции");
                    getchar();
                }
            }
            break;

        case 3:
            while (x < x2)
            {
                if (-80 * a * a - 46 * a * x + 21 * x * x + 1 > 0.0001 )
                {
                    Y = (log(-80 * a * a - 46 * a * x + 21 * x * x + 1)) / (log(10));
                    printf("Y = %f\n", Y);

                    mas[j] = Y;
                    max = mas [0];
                    min = mas [0];

                    for (j = 0; j < Y; j++)
                    {
                        if (max < mas[j])
                            max = mas[j];
                        if (min > mas[j])
                            min = mas[j];
                    }

                    Y2 = (log(-80 * a * a - 46 * a * (x + shag) + 21 * (x + shag) * (x + shag) + 1)) / (log(10));
                    if (Y2 - Y == raznf) {
                        Y2 = (log(-80 * a * a - 46 * a * (x + shag) + 21 * (x + shag) * (x + shag) + 1)) / (log(10));
                        break;
                    } else {
                        shag = shag * 2;
                        Y2 = (log(-80 * a * a - 46 * a * (x + shag) + 21 * (x + shag) * (x + shag) + 1)) / (log(10));
                        {
                            max = x;
                            x = x + shag;
                            if (x >= x2)
                                break;
                        }
                    }
                    printf("Наибольший элемент %f\n", max);
                    getchar();
                    printf("Наименьший элемент %f\n", min);
                    getchar();
                }
                else
                {
                    printf("Значение выражения не пренадлежит области определения функции");
                    getchar();
                }
            }
            break;
        default:
            printf("Ошибка");

    }
    return 0;
}