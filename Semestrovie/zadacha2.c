#include <stdio.h>

double f(double x) {

return 2*x*(x-1);
}

int main() {
int n = 0;
double a, b, c, v1, v2, x;
printf("Введите интервал a ");
scanf("%lf", &a);
printf("Введите интервал b ");
scanf("%lf", &b);
printf("Введите точность ");
scanf("%lf", &c);
do {
a = (a + b) / 2;
v1 = x - c;
v2 = x + c;
if (v1 <= v2)
b = x;
else a = x;

n = n + 1;

} while ((a - b) >= c);
printf("Минимум функции = %lf\n", a);
return 0;
}
