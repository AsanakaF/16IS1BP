#include <stdio.h>
#include <math.h>
int main()
{
    int un;
    double G,F,Y,x,a;

    printf("Введите x: "); 
    scanf("%lf", &x);
    printf("Введите a: ");
    scanf("%lf", &a);
    printf("Введите G-1 F-2 Y-3: ");
    scanf("%d", &un);

    switch (un)
    {
        case 1:
            if (fabs(25 * a * a + 30 * a * x + 9 * x * x) >= 0.00001)
            {
                G = (9 * (7 * a * a - 19 * a * x + 10 * x * x)) / (25 * a * a + 30 * a * x + 9 * x * x);
                printf("G = %f\n", G);
            }
            else
            {
                printf("Функция не определена");
            }
            break;

        case 2:
            if ((cos(9 * a * a - 13 * a * x - 10 * x * x) >= -1) && (cos(9 * a * a - 13 * a * x - 10 * x * x) <= 1))
            {
                F = cos(9 * a * a - 13 * a * x - 10 * x * x);
                printf("%f\n", F);
            }
            else
            {
                printf("Значение выражения не принадлежит области определения функции");
            }
            break;

        case 3:
            if (-80 * a * a - 46 * a * x + 21 * x * x + 1 > 0.0001 )
            {
            Y = (log(-80 * a * a - 46 * a * x + 21 * x * x + 1)) / (log(10));
            printf("%f\n", Y);
            }
            else
            {
                printf("Значение выражения не принадлежит области определения функции");
            }
            break;

        default:
            printf("Ошибка");


    }
    return 0;
}
