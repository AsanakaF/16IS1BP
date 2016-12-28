#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

struct Points
{
    double x[100];    /*структура, в которой хранятся все точки*/
    double y[100];
};

struct verification_points
{
    double x2;  /*структура, в которой хранится точка, относительно которой проверяется принадлежность*/
    double y2;
};

typedef struct verification_points point;

typedef struct Points Point;

Point mas_generation(void)
{
    Point mas;  /*функция генерации массива случайных чисел в заданном диапазоне*/
    int i = 0;
    srand(time(NULL));

    for (i = 0; i < 100; i++) {
        mas.x[i] = (double) rand() / RAND_MAX * (5.0 + 5.0) - 5.0;
        mas.y[i] = (double) rand() / RAND_MAX * (5.0 + 5.0) - 5.0;
    }
    return mas;
}

int belong_to_locality(point mas, point mass,double R)
{
    double dist; /*функция проверки точки на принадлежность окрестности*/
    dist = sqrt((pow(2,mass.x2-mas.x2))+pow(2,mass.y2-mas.y2));
    if (dist <= R)
        return 1;
    else
        return 0;
}
int points_quantity(double R)
{
    point p, p_for_fun; /*функция-счетчик точек,принадлежащих окрестности*/
    Point mass;
    int counter = 0;
    int i = 0, c = 0;
    srand(time(NULL));

    c = rand() % 100;

    mass = mas_generation();
    mass.x[c] = p.x2;
    mass.y[c] = p.y2;

    for (i = 0; i < 100; i++)
    {
        p_for_fun.x2 = mass.x[i];
        p_for_fun.y2 = mass.y[i];
        if (belong_to_locality(p,p_for_fun,R) == 1)
        {
            counter++;
        }
    }
    if (counter != 0)
    {
        counter = counter - 1;
    }
    return counter;
}

int main()
{
    double radius,start,stop;
    srand(time(NULL));

    start = omp_get_wtime();
    radius = (double) rand() / RAND_MAX * (30.0);
    printf("Радиус окрестности: %lf\n", radius);
    printf("Количество точек в окрестности: %d\n", points_quantity(radius));
    stop = omp_get_wtime();
    printf("Время работы программы: %lf\n\n", stop - start);
    return 0;
}
