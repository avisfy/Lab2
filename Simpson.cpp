//#include "Header.h"
#include <cmath>

double f(double x);

double simpsons(double a, double b, int n)
{
	double h = fabs(b - a) / n;  //шаг
	double sum = 0;
	double sumNechet = 0;
	double sumChet = 0;
	double x0 = a;
	double xn = 0;
	double x = x0;

	for (int i = 1; i < n; i++)
	{
		x = x + h;
		if ((i % 2) == 0)
			sumChet = sumChet + f(x);
		else
			sumNechet = sumNechet + f(x);
	}
	xn = x + h;
	sum = (h/3.0)*(f(x0) + 2*sumChet + 4*sumNechet + f(xn));
	return sum;
}
