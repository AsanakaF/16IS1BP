#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

int main() {
    float x[100];
    double timer[1000], start, stop;
    int i = 0;
    float x2, y, y2, a;

    FILE *file;
    srand(time(NULL));
    start = omp_get_wtime();

    a = (float) rand() / RAND_MAX * (float) 10.0;
    x2 = (float)rand()/RAND_MAX * (float) 10.0;
    y = (float)rand()/RAND_MAX * (float) 10.0;

    y2 = a * x2 + y;

    for (i = 0; i < 1000; i++) {
        x[i] = (float) rand() / 100;
    }

    file = fopen("/home/alena/sxpy2float.dat", "w");
    for (i = 0; i < 100; i++) {
        stop = omp_get_wtime();
        timer[i] = stop - start;
        fprintf(file, "%f\n", timer[i]);
    }
    fclose(file);
    return 0;
}