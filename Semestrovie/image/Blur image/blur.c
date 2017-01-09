#include "qdbmp.h"
#include <stdio.h>

int main(void)
{
    BMP* bmp;
    UCHAR r1, g1, b1, r2, g2, b2, r3, g3, b3, r4, g4, b4, r5, g5, b5, r6, g6, b6, r7, g7, b7,r8, g8, b8, r9, g9, b9;
    UINT width, height;
    UINT x, y;
    int Gred, Ggreen, Gblue;

    bmp = BMP_ReadFile( "/home/alena/lena.bmp" );
    BMP_CHECK_ERROR( stderr, -1 ); /* если произошла ошибка,выводится уведомление и выход */

    width = BMP_GetWidth( bmp );
    height = BMP_GetHeight( bmp );

    for ( x = 0 ; x < width ; ++x )
    {
        for ( y = 0 ; y < height ; ++y )
        {
/* Получить значения RGB пикселей */

            BMP_GetPixelRGB(bmp, x, y, &r1, &g1, &b1);
            BMP_GetPixelRGB(bmp, x - 3, y, &r2, &g2, &b2);
            BMP_GetPixelRGB(bmp, x + 3, y, &r3, &g3, &b3);
            BMP_GetPixelRGB(bmp, x, y - 3, &r4, &g4, &b4);
            BMP_GetPixelRGB(bmp, x, y + 3, &r5, &g5, &b5);
            BMP_GetPixelRGB(bmp, x + 3, y + 3, &r6, &g6, &b6);
            BMP_GetPixelRGB(bmp, x + 3, y - 3, &r7, &g7, &b7);
            BMP_GetPixelRGB(bmp, x - 3, y + 3, &r8, &g8, &b8);
            BMP_GetPixelRGB(bmp, x - 3, y - 3, &r9, &g9, &b9);

            Gred = (r1 + r2 + r3 + r4 + r5 + r6 + r7 + r8 + r9) / 9;
            Ggreen = (g1 + g2 + g3 + g4 + g5 + g6 + g7 + g8 + g9) / 9;
            Gblue = (b1 + b2 + b3 + b4 + b5 + b6 + b7 + b8 + b9) / 9;


/* Приобразовываем значение RGB */
            BMP_SetPixelRGB( bmp, x, y, Gred, Ggreen, Gblue );
        }
    }

    BMP_WriteFile( bmp, "/home/alena/output.blur.bmp");
    BMP_CHECK_ERROR( stderr, -2 );

    BMP_Free( bmp );

    return 0;
}
