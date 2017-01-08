#include <stdio.h>
#include <math.h>
int main()
{
    double G, x, a, x2, shag, raznf, G2, SMA ;
    int j;
    double mas[j];

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


            while (x < x2)
            {
                if (fabs(25 * a * a + 30 * a * x + 9 * x * x) >= 0.00001)
                {
                    G = (9 * (7 * a * a - 19 * a * x + 10 * x * x)) / (25 * a * a + 30 * a * x + 9 * x * x);
                    mas[j] = G;
                    j += 1;
                    SMA = G / j;
                    printf("Скользящая средняя G: %lf \n", SMA);

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
                }
                else
                {
                    printf("Функция не определена");
                }
            }

    return 0;
}
