#include "Header.h"

double leftRectangles(double a, double b, int n)
{
	double h = fabs(b - a) / n;  //шаг

	double sumRects = 0;
	double x = a;
	while(x<=b)
	{
		sumRects = sumRects + h*f(x);
		x = x + h;
	}

	return sumRects;
}