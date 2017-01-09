#include "qdbmp.h"
	#include <stdio.h>
	#include <math.h>
	
	void
	Get_pixels_Gx(const BMP *bmp, unsigned long x, unsigned long y, unsigned char *g, unsigned char *b, unsigned char *r, unsigned char *r1, unsigned char *r2,
	             unsigned char *r3, unsigned char *r4, unsigned char *r5);
	
	void
	Get_pixels_Gy(const BMP *bmp, unsigned long x, unsigned long y, unsigned char *g, unsigned char *b, unsigned char *r, unsigned char *r1, unsigned char *r2,
	             unsigned char *r3, unsigned char *r4, unsigned char *r5);
	
	int main(void)
	{
	    BMP*    bmp;
	    UCHAR   r,r1,r2,r3,r4,r5, g, b;
	    UINT    width, height;
	    UINT    x, y;
	    int Gx,Gy, Gint;
	
	    bmp = BMP_ReadFile( "/home/alena/lena.bmp" );
	    BMP_CHECK_ERROR( stderr, -1 ); /* если произошла ошибка,выводится уведомление и выход */ 
	
	    width = BMP_GetWidth( bmp );
	    height = BMP_GetHeight( bmp );
	    for ( x = 0 ; x < width-2 ; ++x )
	    {
	        for ( y = 0 ; y < height-2 ; ++y )
			
			/* Получить значения RGB пикселей */ 
	        {
	            Get_pixels_Gx(bmp, x, y, &r, &r1, &r2, &r3, &r4, &r5, &g, &b);
	            Gx = (r+r1+r2) - (r3+r4+r5);
	            Get_pixels_Gy(bmp, x, y, &r, &r1, &r2, &r3, &r4, &r5, &g, &b);
	            Gy = (r+r1+r2) - (r3+r4+r5);
	            Gint = (int)(sqrt(Gx * Gx + Gy * Gy));
	
			/* Приобразовываем значение RGB */ 
			
	            BMP_SetPixelRGB( bmp, x, y, Gint, Gint, Gint);
	
	        }
	    }
	
	    BMP_WriteFile( bmp, "/home/alena/output.sobel.bmp");
	    BMP_CHECK_ERROR( stderr, -2 );
	
	    BMP_Free( bmp );
	
	    return 0;
	}
	
	void
	Get_pixels_Gy(const BMP *bmp, unsigned long x, unsigned long y, unsigned char *r, unsigned char *r1, unsigned char *r2,
	unsigned char *r3, unsigned char *r4, unsigned char *r5, unsigned char *g, unsigned char *b) {
	    BMP_GetPixelRGB(bmp, x, y + 2, r, g, b);
	    BMP_GetPixelRGB(bmp, x+1, y+2, r1, g, b);
	    BMP_GetPixelRGB(bmp, x+2, y+2, r2, g, b);
	    BMP_GetPixelRGB(bmp, x, y, r3, g, b);
	    BMP_GetPixelRGB(bmp, x+1, y, r4, g, b);
	    BMP_GetPixelRGB(bmp, x+2, y, r5, g, b);
	}
	
	void
	Get_pixels_Gx(const BMP *bmp, unsigned long x, unsigned long y, unsigned char *r, unsigned char *r1, unsigned char *r2,
	unsigned char *r3, unsigned char *r4, unsigned char *r5, unsigned char *g, unsigned char *b) {
	    BMP_GetPixelRGB(bmp, x + 2, y, r, g, b);
	    BMP_GetPixelRGB(bmp, x+2, y+1, r1, g, b);
	    BMP_GetPixelRGB(bmp, x+2, y+2, r2, g, b);
	    BMP_GetPixelRGB(bmp, x, y, r3, g, b);
	    BMP_GetPixelRGB(bmp, x, y+1, r4, g, b);
	    BMP_GetPixelRGB(bmp, x, y+2, r5, g, b);
	}
