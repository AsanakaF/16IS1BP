#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int i, j;
    double sma[10],mas[10],mas2[10];

    for (i = 0; i < 10; i++)
    {
        mas[i] = rand()%120;
    }
    mas2[0]= mas[0];
    for (i = 0;i < 10; i++){
        for (j = i-3; j < i ; ++j) {
            if (j>=0)
            {
                mas2[j] = mas[j] + mas2[j - 1];
            }
        }
        if (i >= 3)
        {
            sma[i] = mas2[i-1]/3;
            printf("%lf\n", sma[i]);
        }
        memset(mas2,0,50);

    }
    FILE *file;
    file = fopen("/home/alena/sma.dat", "w+");

    for(i = 0,j = 3;i < 10,j<10;i+=1,j+=1){
        fprintf(file, "%i %lf \n", i , mas[i]);
        fprintf(file, "%i %lf \n", i , sma[j]);
    }

    fclose(file);

    return 0;
}
