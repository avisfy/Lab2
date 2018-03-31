#include <iostream>

double leftRectangles(double a, double b, int n);
double trapez(double a, double b, int n);

int main()
{
	double a = 0;
	double b = 1;
	int n1 = 4;
	int n2 = 10;

	std::cout << std::fixed;
	std::cout.precision(4);
	std::cout << "\tLevux pryamoygolnikov\n";
	double integral = leftRectangles(a, b, n1);
	std::cout << "n = " << n1 << ", integral = " << integral << std::endl;
	integral = leftRectangles(a, b, n2);
	std::cout << "n = " << n2 << ", integral = " << integral << std::endl<< std::endl;
	
	std::cout << "\tTrapezii\n";
	integral = trapez(a, b, n1);
	std::cout << "n = " << n1 << ", integral = " << integral << std::endl;
	integral = trapez(a, b, n2);
	std::cout << "n = " << n2 << ", integral = " << integral << std::endl << std::endl;

	system("pause");
	return 0;
}