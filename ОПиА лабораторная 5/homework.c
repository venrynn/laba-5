#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>
double p_1(double x, double y)
{
	return sqrt(10. * (pow(x, 1. / 3) + pow(x, y + 2.)));
}
double p_2(double x, double y, double z)
{
	return pow(asin(z), 2.) - fabs(x - y);
}
main()
{
	double x,y,z,b;
	scanf("%lf%lf%lf", &x, &y ,&z);
	b = p_1(x,y) * p_2(x,y,z);
 	printf("%lf\n", b);
}