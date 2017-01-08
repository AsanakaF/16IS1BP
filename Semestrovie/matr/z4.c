#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matr1[3][3], matr2[3][3], matr[3][3];
    int i, j, k = 0, b = 0, c = 0;
    srand(time(NULL));

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            matr1[i][j] = rand()%20;
            matr2[i][j] = rand()%20;
            
            printf("matr1 %d\n", matr1[i][j]);
            printf("matr1 %d\n", matr1[i][j]);
        }
    }
    printf("\n");

    while(c < 9)
    {
        while (i < 3)
        {
            for (k = 0; k < 3; k++)
            {
                for (j = 0; j < 3; j++)
                {
                    b = b + matr1[i][j] * matr2[j][k];
                }
                matr[i][k] = b;
                c++;
                b = 0;
            }
            i++;
        }
        i = 0;
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", matr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
