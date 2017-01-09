#include "qdbmp.h" 
#include <stdio.h> 

int main(void) 
{ 
BMP* bmp; 
UCHAR r, g, b; 
UINT width, height; 
UINT x, y; 

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
BMP_GetPixelRGB(bmp, x - 1, y, &r2, &g2, &b2);
BMP_GetPixelRGB(bmp, x + 1, y, &r3, &g3, &b3);
BMP_GetPixelRGB(bmp, x, y - 1, &r4, &g4, &b4);
BMP_GetPixelRGB(bmp, x, y + 1, &r5, &g5, &b5);
BMP_GetPixelRGB(bmp, x + 1, y + 1, &r6, &g6, &b6);
BMP_GetPixelRGB(bmp, x + 1, y - 1, &r7, &g7, &b7);
BMP_GetPixelRGB(bmp, x - 1, y + 1, &r8, &g8, &b8);
BMP_GetPixelRGB(bmp, x - 1, y - 1, &r9, &g9, &b9);


/* Приобразовываем значение RGB */ 
BMP_SetPixelRGB( bmp, x, y, 255 - r, 255 - g, 255 - b ); 
} 
} 

BMP_WriteFile( bmp, "/home/alena/output.blur.bmp"); 
BMP_CHECK_ERROR( stderr, -2 ); 

BMP_Free( bmp ); 

return 0; 
}
