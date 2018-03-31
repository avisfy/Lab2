//#include "Header.h"
#include <cmath>

double f(double x);

double trapez(double a, double b, int n)
{
	double h = fabs(b - a) / n;  //шаг
	double sum = 0;
	double x0 = a;
	double xn = 0;
	double x = x0;
	
	for (int i = 1; i < n; i++)
	{
		x = x + h;
		sum = sum + f(x);
	}
	xn = x + h;
	sum = h*((f(x0) + f(xn)) / 2 + sum);
	return sum;
}
