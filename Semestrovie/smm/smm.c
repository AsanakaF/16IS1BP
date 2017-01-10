#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, k, t, b[2];
    double smm[17], mas[10];


    for (i = 0; i < 20; i++) {
        mas[i] = rand() % 120;
        printf("%lf\n",mas[i]);
    }

    for (k = 2; k < 19; ++k) {
        if (k == 2){
            for (i = 0; i < 3; ++i) {
                b[i] = mas[i];
            }
        }
        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2 - i; j++) {
                if (b[j] > b[j + 1]) {
                    t = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = t;
                }

            }
        }
        printf("%d %d %d\n", b[0], b[1],b[2]);
        smm[k] = b[1];
        b[0] = mas[k-2];
        b[1] = mas[k-1];
        b[2] = mas[k];

    }

    FILE *file;
    file = fopen("/home/alena/smm.dat", "w+");

    for (i = 0, j = 3; i < 10, j < 10; i ++ , j ++) {
        fprintf(file, "%i %lf \n", i, mas[i]);
        fprintf(file, "%i %lf \n", i, smm[j]);
    }

    fclose(file);

    return 0;
}
