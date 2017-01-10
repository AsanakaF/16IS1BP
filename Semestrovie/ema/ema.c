#include <stdio.h>
#include <stdlib.h>


int main() {
    int i,j;
    double ema[10], mas[10], mas2[10], m;
    m = 4;
    m = 2/m;


    for (i = 0; i < 10; i++)
    {
        mas[i] = rand()%120;
    }

    mas2[0]= mas2[0];
    for (i = 0;i < 10; i++){
        if (i - 3 == 0){
            for (j = i-3; j < i ; ++j) {
                if (j>=1) {
                    mas2[j] = mas[j] + mas2[j - 1];
                }
            }
        }
        if (i == 3) {
            ema[i] = mas[j-1]/3;
        }
        if (i > 3) {
            ema[i] = m * mas[i] + (1 - m) * ema[i - 1];

        }
        printf("%lf\n",ema[i]);
    }

    FILE *file;
    file = fopen("/home/alena/ema.dat", "w+");

    for(i = 0,j = 3;i < 10,j<10;i ++,j++){
        fprintf(file, "%i %lf \n", i , mas[i]);
        fprintf(file, "%i %lf \n", i , ema[j]);
    }

    fclose(file);

    return 0;
}
