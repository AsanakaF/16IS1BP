#include <stdio.h>
#include <math.h>
int main()
{
    double G,F,Y,x,a;

    scanf("%1f", &x);
    scanf("%lf", &a);

    G=(9*(7*a*a-19*a*x+10*x*x))/(25*a*a+30*a*x+9*x*x);
    F=cos(9*a*a-13*a*x-10*x*x);
    Y=(log(-80*a*a-46*a*x+21*x*x+1))/(log(10));

    printf("%f\n", G);
    printf("%f\n", F);
    printf("%f\n", Y);

    return 0;

}