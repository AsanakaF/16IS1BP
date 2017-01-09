#include "qdbmp.h"
#include <stdio.h>

int main(void)
{
    BMP*    bmp;
    UCHAR   r, g, b;
    UINT    width, height;
    UINT    x, y;

    bmp = BMP_ReadFile( "lena.bmp" );
    BMP_CHECK_ERROR( stderr, -1 ); /* если произошла ошибка,выводится уведомление и выход */

    width = BMP_GetWidth( bmp );
    height = BMP_GetHeight( bmp );

    for ( x = 0 ; x < width ; ++x )
    {
        for ( y = 0 ; y < height ; ++y )
        {
            /* Получить значения RGB пикселей */
            BMP_GetPixelRGB( bmp, x, y, &r, &g, &b );

            /* Приобразовываем значение RGB */
            BMP_SetPixelRGB( bmp, x, y, 255 - r, 255 - g, 255 - b );
        }
    }

    BMP_WriteFile( bmp, "output.bmp");
    BMP_CHECK_ERROR( stderr, -2 );

    BMP_Free( bmp );

    return 0;
} 
