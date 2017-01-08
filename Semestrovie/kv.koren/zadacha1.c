#include <stdio.h>

int main()
{
double a, b;
int i = 0;

printf("Введите число: ");
scanf("%lf",&a);

b = a;
while (b*b!=a)
{
b = 0.5 * (b + (a / b));
i++;
if (i>150)
break;
}
printf("Квардратный корень равен: %f",b);
return 0;
}
