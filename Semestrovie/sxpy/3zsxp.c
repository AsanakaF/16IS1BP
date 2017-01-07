#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

int main() {
    double x[100];
    double timer[1000], start, stop;
    int i = 0;
    double x2, y, y2, a;

    FILE *file;
    srand(time(NULL));
    start = omp_get_wtime();

    a = (double) rand() / RAND_MAX * (double) 10.0;
    x2 = (double)rand()/RAND_MAX * (double) 10.0;
    y = (double)rand()/RAND_MAX * (double) 10.0;

    y2 = a * x2 + y;

    for (i = 0; i < 1000; i++) {
        x[i] = (double) rand() / 100;
    }

    file = fopen("/home/alena/sxpy3bouble.dat", "w");
    for (i = 0; i < 100; i++) {
        stop = omp_get_wtime();
        timer[i] = stop - start;
        fprintf(file, "%f\n", timer[i]);
    }
    fclose(file);
    return 0;
}