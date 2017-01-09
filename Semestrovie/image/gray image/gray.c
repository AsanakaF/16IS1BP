#include "qdbmp.h" 
#include <stdio.h> 

int main(void) 
{ 
BMP* bmp; 
UCHAR r, g, b; 
UINT width, height; 
UINT x, y; 
int gray;

bmp = BMP_ReadFile( "/home/alena/lena.bmp" ); 
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
gray = (r + g + b)/3;
BMP_SetPixelRGB( bmp, x, y, 255 - gray, 255 - gray, 255 - gray ); 
} 
} 

BMP_WriteFile( bmp, "/home/alena/output.gray.bmp"); 
BMP_CHECK_ERROR( stderr, -2 ); 

BMP_Free( bmp ); 

return 0; 
}
