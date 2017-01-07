#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>

int main() {
    int x[100];
    int timer[1000], start, stop;
    int i = 0;
    int x2, y, y2, a;

    FILE *file;
    srand(time(NULL));
    start = omp_get_wtime();

    a = (int) rand() / RAND_MAX * (int) 10.0;
    x2 = (int)rand()/RAND_MAX * (int) 10.0;
    y = (int)rand()/RAND_MAX * (int) 10.0;

    y2 = a * x2 + y;

    for (i = 0; i < 1000; i++) {
        x[i] = (int) rand() / 100;
    }

    file = fopen("/home/alena/sxpy1int.dat", "w");
    for (i = 0; i < 100; i++) {
        stop = omp_get_wtime();
        timer[i] = stop - start;
        fprintf(file, "%f\n", timer[i]);
    }
    fclose(file);
    return 0;
}
